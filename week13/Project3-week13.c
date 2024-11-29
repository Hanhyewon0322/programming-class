#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define STUDENTNUM 4

struct student{
	int ID;
	int score;
};
void main(void){
	struct student s[STUDENTNUM];
	int i;
	int max_score=0;
	double avg = 0;
	
	for (i=0;i<STUDENTNUM;i++)
	{
		printf("Input the ID: ");
		scanf("%d", &s[i].ID);
		printf("Input the score: ");
		scanf("%d", &s[i].score);
		
		avg += s[i].score;
		if (s[i].score > s[max_score].score){
			max_score = i;
		}
	}
	avg /=STUDENTNUM;
	
	printf("The average of the score : %f\n", avg);
	printf("The highest score - ID: %d, score: %d\n", s[max_score].ID, s[max_score].score);
}
