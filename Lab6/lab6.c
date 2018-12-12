#include <stdio.h>
#include <string.h>

void swap(char *x, char *y);
void print_string(int size, char *str);
char* reverse(int size, char* str);

int main(void)
{
    char str[256];
    
    printf("Some text: ");
    fgets(str, 256, stdin);
    
    int size = strlen(str); 
    reverse(size, &*str);
	
    printf("Reversed text:\n");
    print_string(size, &*str);
}
	
void swap(char *x, char *y)
{
    char tmp = *x;
    *x = *y;
    *y = tmp;
}
 
char* reverse(int size, char* str)
{
    char *x = str, *y = (str + size);
    while (x < y)
    swap(x++, --y);
    return str;
}

void print_string(int size, char *str)
{
    for(int i = 0; i < size; i++)
    {    
        printf("%c", *(str+i));
    }	
    printf("\n");
}

    


