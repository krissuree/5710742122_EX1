#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temp[100], data[100];
    int i;

    printf("Enter capital letters : ");
    scanf("%s",&temp);
    for(i = 0 ; i<strlen(temp); i++){
        if(temp[i]>=50 && temp[i]<=75){
            data[i]=temp[i]+32;}

    printf("%c",data[i]);
            }


    return (0);
}
