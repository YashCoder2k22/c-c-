#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter a Number");
    scanf("%d",&x);
    n=x/10;
    printf("%d without last digit is %d",x,n);
    return 0;

}