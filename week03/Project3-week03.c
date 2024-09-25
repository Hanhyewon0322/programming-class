#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	char n;
	
	printf("enter a character: ");
	scanf("%c", &n);
	
	printf("the next character of %c (%i) is %c (%i)", n,n,n+1,n+1 );
	return 0;
}
