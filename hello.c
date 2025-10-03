#include <stdio.h>

main()
{
	printf("Hello, World!\n");
}

/*
On removing semi-colon:


hello.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main()
      | ^~~~
hello.c: In function ‘main’:
hello.c:5:34: error: expected ‘;’ before ‘}’ token
    5 |         printf("Hello, World!\n")
      |                                  ^
      |                                  ;
    6 | }
      | ~
*/

/*
On removing the trailing ":


hello.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main()
      | ^~~~
hello.c: In function ‘main’:
hello.c:5:16: warning: missing terminating " character
    5 |         printf("Hello, World!\n);
      |                ^
hello.c:5:16: error: missing terminating " character
    5 |         printf("Hello, World!\n);
      |                ^~~~~~~~~~~~~~~~~~
hello.c:6:1: error: expected expression before ‘}’ token
    6 | }
      | ^
hello.c:5:16: error: expected ‘;’ before ‘}’ token
    5 |         printf("Hello, World!\n);
      |                ^
      |                ;
    6 | }
      | ~
*/
