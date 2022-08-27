#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    x=a;
    a=b;
    b=x;
    printf("Swap Values of numbers is %d and %d",a,b);
    return 0;
}