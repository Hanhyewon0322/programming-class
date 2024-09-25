#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float n1, n2;
	
	printf("enter two integers:");
	scanf("%f,%f", &n1, &n2);
	
	printf("%f/%f=%f", n1, n2, (n1/n2));
	return 0;
}
