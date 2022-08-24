#include<stdio.h>
int main()
{
    float R,A;
    printf("Enter the radius of circle");
    scanf("%f",&R);
    A=3.14*R*R;
    printf("Area of circle is %f having the Radius %f",A,R);
    return 0;
}