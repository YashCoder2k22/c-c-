#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swap Values of numbers is %d and %d",a,b);
    return 0;
}