#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char w1[50], w2[50], w3[50];
	FILE *fp;
	
	printf("input a word :");
	scanf("%s", w1);
	printf("input a word :");
	scanf("%s", w2);
	printf("input a word :");
	scanf("%s", w3);
	
	fp = fopen("sample.txt", "w");
	if (fp==NULL){
		printf("Unable to open file");
		return;
	}
	fprintf(fp, "%s\n", w1);
	fprintf(fp, "%s\n", w2);
	fprintf(fp, "%s\n", w3);
	
	fclose(fp);
	
	return 0;
}
