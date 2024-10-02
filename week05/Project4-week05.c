#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("Input the year: ");
	scanf("%d", &num);
	printf(" Is the year %d the leap year? %d", num, (num%4==0 && num%100!=0)||num%400==0 );
	return 0;
}
