#include <stdio.h>
#include <math.h>

int main()
{
	float y = 0, x = 0.1, sn = 0, se = 0;
	int i = 1;

	for(int n = 1; n <= 35; n++)
	{
		sn += (pow(x,n)*cos(n*(M_PI/3))/n);

		for(x = 0.1; x <= 0.8; x += 0.07)
		{
			y = (-0.5)*log(1-(2*x*cos(M_PI/3)) + pow(x,2));
			printf("X:%.2f ", x);	printf("SN:%f ", sn);

			do {
				se += (pow(x,i)*cos(i*(M_PI/3))/i);
				i++;
				printf("SE:%f ", se);
			} while(se < 0.0001);
			printf("Y:%f\n", y);
		}
	}
	return 0;
}
