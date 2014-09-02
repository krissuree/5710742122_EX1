#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter a couple of number: ");
    scanf("%d %d",&a,&b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    a*b;
    a/b;

    printf("%d*%d = ",a,b);
    printf("%d\n",a*b);
    printf("%d/%d = ",a,b);
    printf("%d",a/b);

    return 0;
}
