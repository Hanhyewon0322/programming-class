#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
struct point{
	int x;
	int y;
};

int getArea(struct point p1, struct point p2);

int main(int argc, char *argv[]) {
	struct point p1, p2;
	
	area = getArea(p1,p2);
}
*/

struct point{
	int x;
	int y;
};
int getArea(struct point *pPtr1, struct point *pPtr2);

int main(int argc, char *argv[]){
	struct point p1,p2;
	struct point *pPtr1, *pPtr2;
	int area;
	area = getArea(pPtr1, pPtr2);
	
	printf("Input the coordinate p1 (x,y):");
	scanf("%d, %d", p1,p2);
	printf("Input the coordinate p2 (x,y):");
	scanf("%d, %d", p1,p2);
	printf("Area: %d", area);
}
