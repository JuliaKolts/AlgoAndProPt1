#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;
    printf("m:");   scanf("%d",&m);
    printf("n:");   scanf("%d",&n);

    printf("--m-++n = %d\n", --m-++n);
    printf("m*n<n++ = %d\n", m*n<n++);
    printf("n-->m++ = %d\n", n-->m++);
return 0;
}
