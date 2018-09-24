#include <stdio.h>
#include <math.h>

int main(void)
{
    int m = 0, n = 0, c = m*n;
    printf("m:");     scanf("%d", &m);
    printf("n:");     scanf("%d", &n);
    printf("--m-++n = %d\n", --m-++n);
    printf("m*n<n++ = %d\n", c < n++);
    printf("n-->m++ = %d\n", n-->m++);
return main();
}
