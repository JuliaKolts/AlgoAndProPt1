#include <stdio.h>

int main(void)
{

	float inchange;
	int change, count = 0;

	scanf ("%f", &inchange);
	inchange *=  100;
	change = (int)inchange;

	while(change) {
    	
		if (change / 25)
		{
        	count += change / 25;
        	change = change % 25;
    	}
		if (change / 10)
		{
			count += change / 10;
			change = change % 10;
		}
		if (change / 5)
		{
			count += change / 5;
			change = change % 5;
		}
		if (change / 1)
		{
			count += change / 1;
			change = change % 1;
    	}
	}
printf("%d\n", count);
}
