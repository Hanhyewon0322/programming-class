#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char w1[50], w2[50], w3[50];
	
	
	printf("input a word :");
	scanf("%s", &w1);
	printf("input a word :");
	scanf("%s", &w2);
	printf("input a word :");
	scanf("%s", &w3);
	
	FILE*fp;
	fp = fopen("C:\sample.txt", "w");
	fclose(fp);
	
	return 0;
}
