#include <stdio.h>
#include <stdlib.h>

static int sum=1;
int main(void)
{
	int sum=0;
	printf("sum=%d\n", sum);
	return 0;
}

extern int sum;

int sum1(void)
{
	sum = sum +1;
}



/*
static int all_files;

extern void sub();

int main(void) 
{
	sub();
	printf("%d\n", all_files);
	return 0;
}

extern int all_files;
void sub(void)
{
	all_files = 10;
}
*/
