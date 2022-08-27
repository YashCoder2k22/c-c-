#include<stdio.h>
int main()
{
    int x,d,sum;
    printf("Enter a Number and a digit");
    scanf("%d%d",&x,&d);
    sum=x*10+d;
    printf("Now Number will be %d",sum);
    return 0;
}