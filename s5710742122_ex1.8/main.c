#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,w,a;

    printf("High: ");
    scanf("%d",&h);
    printf("Wide: ");
    scanf("%d",&w);

    a = h*w*1/2 ;
    printf("Zone = %d\n",a);

    return (0);
}

