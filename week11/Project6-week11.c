#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
void main(void){
	FILE*fp=NULL;
	char c;
	fp = fopen("sample.txt", "r");
	if(fp==NULL)
		printf("파일을 못열음\n");
		
	while((c=fgetc(fp))!=EOF){
	putchar(c);}
	
	fclose(fp);
}
*/


void main(void) {
    FILE* fp = NULL;
    char word[100]; 

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("파일을 못 열음\n");
    }
    while (fgets(word, sizeof(word), fp) != NULL) {
        printf("%s", word);
    }

    fclose(fp);
}
