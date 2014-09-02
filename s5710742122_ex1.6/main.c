#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;

    printf("please enter three number: ");
    scanf("%d %d %d",&a, &b, &c);
    d = a+b+c;
    e = d/3;
    printf("midpoint = %d\n",e);
    return 0;
}
