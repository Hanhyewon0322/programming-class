#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	int grade[5];
	
	for(i=0;i<5;i++)
	{
		printf("Input value - grade[%i]=",i);
		scanf("%d", &grade[i]);
	}
	for (i=0; i<5; i++){
		printf("grade[%i] =", i);
		scanf("%d", &grade[i]);
	}
	int sum = 0;
	for (i=0; i<5; i++){
		sum+=grade[i];
	}
	printf("average: %i\n",sum/5);
	return 0;
}
