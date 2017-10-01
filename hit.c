/* Program to check if a point falls within a rectangle */

#include <stdio.h>
#include <stdlib.h>

/* isHit 
	Given a point defined by (x,y)
	and a rectangle defined by (x1,y1,x2,y2) 
	as lower left and top right corners.
*/
int isHit (float x, float y, float x1, float y1, float x2, float y2)
{
	//printf("isHit %f %f %f %f %f %f\n", x, y, x1, y1, x2, y2);
	if(x >= x1 && y >= y1 && x <= x2 && y <= y2) {
		return 1;
	}
	return 0;
}

int main(int argc, char *argv[])
{

	float x;
	float y;
	
	if (argc != 3) {
		printf ("You must two parameters, x and y\n");
		return 1;
	}
	
	x = atof(argv[1]);
	y = atof(argv[2]);
	
	if (isHit (x, y, 10.0, 10.0, 25.0, 15.0)) {
		printf("Point (%f,%f) hit one of the rectangles!\n" ,x,y);
		return 0;
	}
	else if (isHit(x, y, 3.0, 1.0, 4.0, 2.0)) {
		printf("Point (%f,%f) hit one of the rectangles!\n" ,x,y);
		return 0;
	}
	else if (isHit(x, y, -10.0, -3.0, 10.0, 3.0)) {
		printf("Point (%f,%f) hit one of the rectangles!\n" ,x,y);
		return 0;
	}
	
	printf("Point (%f,%f) missed all of the rectangles!\n" ,x,y);
		return 1;
}
