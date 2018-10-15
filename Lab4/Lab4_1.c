#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int array[150];
    int n = 0, m = 0, tmp = 0, min_index = 0, max_index = 0; 
    float average, sum = 0.0;
    
    printf("Array length: ");    scanf("%i", &n);
    printf("Max element value: ");  scanf("%i", &m);
    srand(time(NULL));
    
    printf("Array:\n");
    
    for(int i = 0; i < n; i++)
    {
        array[i] = rand()%m;
        printf("%i ", array[i]);
        sum += array[i];
    }
    printf("\n");
    printf("Sum: %.2f\n", sum);
    average = sum / n;
    printf("Average: %.2f\n", average);
  
    int min = array[0], max = array[0];	
    
    for (int l = 0; l < n; l++)	
    {
        if (array[l] > max)
        {
            max = array[l];
            max_index = l;
        }
    }
    for (int k = 0; k < n; k++)
    {
        if (array[k] < min)
        {
            min = array[k];
            min_index = k;
        }
    }
    printf("Max: %i\n", max);
    printf("Min: %i\n", min);
	
    tmp = array[min_index];
    array[min_index] = array[max_index];
    array[max_index] = tmp;
    
    printf("Min and max elements swapped:\n");
        for(int y = 0; y < n; y++)
        {
            printf("%i ", array[y]);
        }
    printf("\n");
	
    printf("Without elements that are 10%% bigger than average: \n");
    for(int j = 0; j < n; j++)
    {
        if (array[j] < average * 1.1)
            printf("%i ", array[j]);
        else
            printf("");
    }
    printf("\n");
}
