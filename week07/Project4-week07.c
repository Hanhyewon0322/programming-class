#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int num)
{
	int res =1;
	int i;
	for (i=1; i<=num; i++){
		res*=i;
	}
	
	return res;
}

int combination(int n,int r)
{
	
	return factorial (n)/(factorial (n-r)* factorial(r));
}

int get_integer()
{
	int value;
	printf("Enter the value:");
	scanf("%i", &value);
	return value;
}
int main(void) {
	int n,r;
	n= get_integer();
	r= get_integer();
	
	printf("The result of C(%i,%i) is %i.", n, r, combination(n,r));
	
	return 0;
}
