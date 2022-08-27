#include<stdio.h>
int main()
{
    int x,rem;
    printf("Enter a Number");
    scanf("%d",&x);
    rem=x%10;
    printf("Unit digit of %d is %d",x,rem);
    return 0;

}
