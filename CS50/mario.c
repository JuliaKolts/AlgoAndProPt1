#include <stdio.h>

int main(void)
{
    int height, n, i;
    
    do {
        printf("Height:");
        scanf("%d",&height);
        
    } while (height < 1 || height > 23);
    
    for (i = 0; i < height; i++)
    {
        for(n = height; n > i+1; n--)
            printf("");
        for(; n > -1; n--)
            printf("#");
            
        printf("\n");
    }
}
