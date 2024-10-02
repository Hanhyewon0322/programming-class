#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2;
	printf(" Input two integers: ");
	scanf("%i %i", &n1, &n2);
	
	printf("+ result is %i\n", n1+n2);
	printf("- result is %i\n", n1-n2);
	printf("* result is %i\n", n1*n2);
	printf("/ result is %i\n", n1/n2);
	printf("%% result is %i\n", n1%n2);
	
	return 0;
}
