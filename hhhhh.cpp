#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double poisk_korney(double a, double b, double c)
{
	double d, x1=0, x2=0;
	if (a == 0) {
		printf("Korney ne naydeno\n");
		return 1;
	} else {
	d = b * b - 4 * a * c;
	if (d > 0) { 
	x1 = (-b - sqrt(d)) / (2 * a);
    x2 = (-b + sqrt(d)) / (2 * a);
    printf("x1 = %lf\nx2 = %lf\n", x1, x2);
    } else {
		if (d == 0) {
		x1 = -b / (2 * a);
		printf("x1 = %f\n", x1);
		return x1;
	    } else {
	    printf("Korney ne naydeno\n");
	    return 1;
        }
	    }
    }
    return 0;
}

int main() 
{
    double a, b, c;
    printf("Enter a: "); scanf("%lf", &a);
    printf("Enter b: "); scanf("%lf", &b);
    printf("Enter c: "); scanf("%lf", &c);
    poisk_korney(a, b, c);
    return 0;
}
