9. Greatest of 3 Numbers:
```C
#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter num1 here: ");
    scanf("%d",&a);

    printf("Enter num2 here: ");
    scanf("%d",&b);

    printf("Enter num3 here: ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("The largest number here is: %d ",a);

        }
        else
        {
            printf("The largest number here is: %d ",c);

        }
    }
    else
    {
        printf("The largest number is: %d ",b);
    }

}
```
10. Identifying the type of character of entered:
```C
#include<stdio.h>
int main()
{
    int a,i;

    printf("Enter the character here: ");
    scanf("%d",&a);

    if(a>'a'&&a<'z')
    {
        printf("%d is a small letter.",a);
    }
    else if(a>'A'&&a<'Z')
    {
        printf("%d is a Capital letter.",a);
    }
    else if(a>'0'&&a<'9')
    {
        printf("%d is a digit.",a);
    }
    else
    {
        printf("%d is a special character.",a);
    }

}```
