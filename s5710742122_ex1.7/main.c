#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Enter Number: ",a);
    scanf("%d",&a);
    if(a%7 == 0)
    {
        printf("CORRECT!!!");
    }
    if(a%7 != 0)
    {
        printf("INCORRECT***");
    }


    return 0;
}
