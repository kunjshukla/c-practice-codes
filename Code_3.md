6. Creating a basic Calculator:
```C
#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter num1 here: ");
    scanf("%d",&num1);

    printf("Enter num2 here: ");
    scanf("%d",&num2);

    printf("Addition is : %d",num1+num2);
    printf("Subtraction is : %d",num1-num2);
    printf("Multiplication is : %d",num1*num2);
    printf("Division is : %d",num1/num2);
    return 0; 
}
```
7. Measuring distance travelled by a body:
```C
#include<stdio.h>
int main()
{
    int t,acc,dist,velo;

    printf("Enter the velocity of the body: ");
    scanf("%d",&velo);

    printf("Enter the accerlation of the body: ");
    scanf("%d",&acc);

    printf("Enter the time taken by the body: ");
    scanf("%d",&t);

    dist=(velo*t)+0.5*acc*(t*t);
    printf("The displacement of the body is : %d",dist);
    return 0;
}
```
8.Positve,Negative or Zero
ELSE-IF LADDER:
```C
#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number here: ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("The number is positive.");
    }
    else if(num<0)
    {
        printf("The number is negative.");
    }
    else
    {
        printf("The number is zero.");
    }
}
```
ALT
Nested IF-ELSE Loop:
```C
#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number here: ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("The number is positive.");
    }
    else 
    {
        if(num<0)
        {
            printf("The number is negative.");
        }
        else
        {
            printf("The number is zero.");
        }
    }
    return 0;
}
```
