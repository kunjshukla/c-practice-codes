#include<stdio.h>
int main()
{
    int h,b,a;
    printf("Enter Height here:");
    scanf("%d",&h);
    printf("Enter the base here:");
    scanf("%d",&b);
    a=h*b*0.5;
    printf("Area is:%d",a);
    return 0;
}