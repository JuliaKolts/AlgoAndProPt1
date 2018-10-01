#include <stdio.h>
#include <math.h>

int main()
{
	float a = 1000, b = 0.0001, f;
	double a1 = 1000, b1 = 0.0001, d;
    f = (pow(a+b,2)-(pow(a,2)+(2*a*b)))/(pow(b,2));
    d = (pow(a1+b1,2)-(pow(a1,2)+(2*a1*b1)))/(pow(b1,2));
    printf("Result for float: %f\n", f);
    printf("Result for double: %g\n", d);
return 0;
}
