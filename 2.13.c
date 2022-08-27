#include<stdio.h>
int main()
{
    int x,rem,sum;
    printf("Enter a 3 Digit Number");
    scanf("%d",&x);
    rem=x%10;
    x=x/10;
    sum=rem*100+x;
    printf("Now the Number is %d",sum);
    return 0;
}