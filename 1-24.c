#include <stdio.h>

int main(void) {
    int c, prev = 0;
    int paren = 0, brace = 0, bracket = 0;
    int in_single_quote = 0, in_double_quote = 0;
    int in_single_comment = 0, in_multi_comment = 0;

    while ((c = getchar()) != EOF) {
        // Handle comment start/end
        if (!in_single_quote && !in_double_quote) {
            if (!in_single_comment && !in_multi_comment && prev == '/' && c == '/')
                in_single_comment = 1;
            else if (!in_single_comment && !in_multi_comment && prev == '/' && c == '*')
                in_multi_comment = 1;
            else if (in_single_comment && c == '\n')
                in_single_comment = 0;
            else if (in_multi_comment && prev == '*' && c == '/')
                in_multi_comment = 0;
        }

        // Skip content inside comments
        if (in_single_comment || in_multi_comment) {
            prev = c;
            continue;
        }

        // Handle string and character quotes
        if (c == '"' && !in_single_quote && prev != '\\')
            in_double_quote = !in_double_quote;
        else if (c == '\'' && !in_double_quote && prev != '\\')
            in_single_quote = !in_single_quote;

        // Skip content inside quotes
        if (in_single_quote || in_double_quote) {
            prev = c;
            continue;
        }

        // Count parentheses, brackets, braces
        if (c == '(') paren++;
        else if (c == ')') paren--;
        else if (c == '[') bracket++;
        else if (c == ']') bracket--;
        else if (c == '{') brace++;
        else if (c == '}') brace--;

        prev = c;
    }

    // Output results
    if (paren == 0 && bracket == 0 && brace == 0)
        printf("All delimiters are balanced.\n");
    else {
        if (paren != 0)   printf("Unbalanced parentheses: %d\n", paren);
        if (bracket != 0) printf("Unbalanced brackets: %d\n", bracket);
        if (brace != 0)   printf("Unbalanced braces: %d\n", brace);
    }

    return 0;
}
