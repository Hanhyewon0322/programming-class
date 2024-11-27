#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[10];
	double grade;
};
int main (void){
	struct student s1;
	printf("%d", s1.ID);
	s1.name[0]='c';
	strcpy(s1.name, "Han");
	s1.grade=4.3;
	
	printf("%d", s1.name);
	printf("%d", s1.grade);
}
