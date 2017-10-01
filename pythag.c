//Project 1

#include <stdio.h>
#include <stdlib.h>

double my_sqrt(double n) {
	double c, p;
	
	if (n == 0) {
		c = 0;
	}
	else {
		c = n/2;
		do { 
			p = c;
			c = (p + n/p)/2;
		} while (p != c);	
	}
	return c;
}

int main(int argc, char *argv[]) {

	double a, b, c, n;
	
	if (argc != 3) {
		printf ("You must give lengths a and b\n");
		return 1;
	}
	
	a = atof(argv[1]);
	b = atof(argv[2]);
	n = (a*a) + (b*b);
	c = my_sqrt(n);

	printf("a = %f, b = %f, c = %f\n", a, b, c);
		
}

