#include <stdio.h>

main()
{
	printf("hello,\c world\n");
}

/*	
 *  Additional:
 *	
 *	Adding \c only prints c as it is an unknown escape sequence
 *
 *
 *
 *	Error Messages:
 *
 *	hello.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 *	    3 | main()
 *	      | ^~~~
 *	hello.c: In function ‘main’:
 *	hello.c:5:34: warning: unknown escape sequence: '\c'
 *	    5 |         printf("hello,\c world\n");
 *	      |   
 * 	      
 */
