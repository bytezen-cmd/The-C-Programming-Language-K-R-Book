#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n);
int mybinsearch(int x, int v[], int n);

int main(void)
{
    printf("Array: [0,1,2,3,4,5,6,7,8,9,10]\n");
    int v[11];
    for (int i = 0; i < 11; i++)
        v[i] = i;

    printf("Searching for 7 with both versions...\n");

    clock_t t1 = clock();
    int m = mybinsearch(7, v, 11);
    clock_t t2 = clock();
    int nm = binsearch(7, v, 11);
    clock_t t3 = clock();

    printf("old: %d\n", nm);
    printf("new: %d\n", m);
    printf("Execution time (s): new = %.8f, old = %.8f\n",
           (double)(t2 - t1) / CLOCKS_PER_SEC,
           (double)(t3 - t2) / CLOCKS_PER_SEC);

    return 0;
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;      }
    return -1; 
}

int mybinsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high && v[mid] != x) {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    if (v[mid] == x)
        return mid;
    else
        return -1;
}


