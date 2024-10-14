#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	int answer = 50;
	int times;
	do{
		printf("Guess a number:");
		scanf("%i", &num);
	if (num> answer){
		printf("High!\n");
		times++;
	}
	else if (num< answer){
	
		printf("Low!\n");
		times++;
	}
	else
	{
		times++;
		break;
	}

	}while(num!=answer);	
	printf("Congratulation! Trials:%i", times);
	return 0;
	
}
