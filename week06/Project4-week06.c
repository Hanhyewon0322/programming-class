#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum =0;
	int i;
	int n1; 
	
	printf("Enter a number:");
	scanf("%i",&n1);
	for(i=1; i<n1+1; i++){
		sum += i;
	}
	
	printf("The result is %i", sum);
	return 0;
}
