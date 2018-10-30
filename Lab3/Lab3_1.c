#include <stdio.h>
#include <math.h>

int main(void)
{
	double y = 0, x = 0.1, sn = 0, se = 0;
	int i = 1;

	for(x = 0.1; x <= 0.81; x += 0.07)
	{
		for(int n = 1; n < 35; n++)
		{
			sn += (pow(x,n)*cos(n*3.14/3))/n;
		}
	
		do {
			se += (pow(x,i)*cos(i*3.14/3))/i;
			i++;
		} while(se < 0.0001);
	
		y = (-0.5)*log(1-(2*x*cos(3.14/3)) + pow(x,2));
	
		printf("X = %.2f    SN = %f    SE = %f    Y = %f\n", x, sn, se, y);		

	}
}

	
		
			
			
				
	
