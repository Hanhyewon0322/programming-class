#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2;
	char c;
	printf("Enter the calculation:");
	scanf("%i%c%i",&n1,&c,&n2);
	if (c =='+'){
		printf("=%i", n1+n2);
	}
	else if (c =='-'){
		printf("=%i", n1-n2);
	}
	else if (c =='*'){
		printf("=%i", n1*n2);
	}
	else if (c =='/'){
		printf("=%i", n1/n2);
	}
	
	
	return 0;
}
