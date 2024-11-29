#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
struct point{
	int x;
	int y;
};

int getArea(struct point p1, struct point p2){
	int xdiff = p1.x - p2.x;
	int ydiff = p1.y - p2.y;
	
	return (xdiff*ydiff);
}
int main(int argc, char *argv[]) {
	struct point p1, p2;
	int area;

	printf("Input the coordinate p1 (x y): ");
	scanf("%d %d",&p1.x ,&p1.y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%d %d",&p2.x ,&p2.y);
	area = getArea(p1,p2);
	printf("Area: %d", area);
}
*/

struct point{
	int x;
	int y;
};
int getArea(struct point *pPtr1, struct point *pPtr2){
	int xdiff = pPtr1 ->x - pPtr2->x;
	int ydiff = pPtr1 ->y - pPtr2->y;
	
	return (xdiff*ydiff);
}


int main(int argc, char *argv[]){
	struct point p1,p2;
	struct point *pPtr1, *pPtr2;
	int area;
	
	pPtr1 = &p1;
	pPtr2 = &p2;
	
	printf("Input the coordinate p1 (x y):");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x y):");
	scanf("%d %d", &p2.x, &p2.y);
	
	area = getArea(pPtr1, pPtr2);
	

	printf("Area: %d", area);
}

