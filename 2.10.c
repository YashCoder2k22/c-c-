#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("Now Number will be %d",x);
    return 0;
}