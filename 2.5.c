#include<stdio.h>
int main()
{
    int x,rem,sum=0;
    printf("Enter a 3 digit Number");
    scanf("%d",&x);
    rem=x%10;
    sum=sum+rem;
    x=x/10;

    rem=x%10;
    sum=sum+rem;
    x=x/10;

    rem=x%10;
    sum=sum+rem;
    x=x/10;

    printf("Sum of the digits is %d",sum);
    return 0;

}