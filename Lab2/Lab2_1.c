#include <stdio.h>
#include <math.h>

int main()
{
	int n = 1;
	double sum = 0, a = 2;		//starting from a2
	
	do {
		a *= ((2*n + 2)*pow(n,n))/pow(n-1,n-1);
		sum += a;
		n++;
	} while (a <= 0.0001);
	
	printf("Sum: %f\n", sum + 2);	//adding a1 (a1 = 2)
	
	return 0;
}
