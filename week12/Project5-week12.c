#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char *pc;
	int *pi;
	double *pd;
	
	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double *)10000;
	
	printf("증가 전: pc = %d, pi = %d, pd=%d\n", pc, pi, pd);
	
	pc++;
	pi++;
	pd++;
	printf("증가 후: pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	return 0;
}
