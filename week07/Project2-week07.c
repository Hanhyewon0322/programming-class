#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a, int b){
	return a + b;
}

int square(int n){
	return n*n;
}

int get_max(int x, int y){
	if(x>y){
		return x;
	}
	else
		return y;
}
int main(int argc, char *argv[]) {
	int n1, n2, r1, r2, r3;
	printf("Enter the integers: ");
	scanf("%i %i", &n1, &n2);
	r1 = sumTwo(n1, n2);
	r2 = square(n1);
	r3 = get_max(n1,n2);
	printf("Result - Sum: %i, Square: %i, Max: %i",r1, r2, r3);
	return 0;
}
