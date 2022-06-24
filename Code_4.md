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
