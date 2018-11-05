#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int array[100], array2[100];
    int n = 0, m = 0, tmp = 0, min_index = 0, max_index = 0; 
    double average, sum = 0.0;
    
    printf("Array length: ");		scanf("%i", &n);
    printf("Max element value: ");  scanf("%i", &m);
	
    srand(time(NULL));
    printf("Array:\n");
    
    for(int i = 0; i < n; i++)
    {
    	array[i] = rand()%m;
        printf("%i", array[i]);
        sum += array[i];
    }
	
    printf("\n");
    printf("Sum: %.0f\n", sum);
    
	average = sum / n;
    printf("Average: %.2f\n", average);
  
    int min = array[0], max = array[0];	
    for (int j = 0; j < n; j++)	
    {
        if (array[j] > max)
        {
            max = array[j];
            max_index = j;
        }
    
        if (array[j] < min)
        {
            min = array[j];
            min_index = j;
        }
    }
    printf("Max: %i\n", max);
    printf("Min: %i\n", min);
	
    tmp = array[min_index];
    array[min_index] = array[max_index];
    array[max_index] = tmp;
    
    printf("Min and max elements swapped:\n");
        for(int k = 0; k < n; k++)
        {
            printf("%i ", array[k]);
        }
	
    printf("\n");
    printf("Without elements that are 10%% bigger than average: \n");
	
    for(int a = 0; a < n; a++)
    {
        if (array[a] < average * 1.1)
          	array2[a] = array[a];
        else
            continue;
		
		printf("%i ", array2[a]);
    }
    printf("\n");
}
