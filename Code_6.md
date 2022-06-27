

```C
#include<stdio.h>
int main()
{
    int arr[10],i,max,min;
    for(i=0;i<10;i++)
    {
        printf("Enter num[%d] here: ",i);
        scanf("%d",arr[i]);
    }
    if (i==0)
    {
        max=min=arr[i];
    }
    else
    {
        if(min>arr[i])
        {
         min=arr[i];   
        }
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("The maximum number is: %d",max);
    printf("The smallest number is: %d",min);
    
    
}```



```C
#include<stdio.h>
int main()
{
   int num,rem;
   printf("Enter the num here: ");
   scanf("%d",&num);
   rem=num%10;
   if(rem/2==0)
   {
       printf("The numner is even");
   }
   else
   {
       printf("The number entered is odd.");
   }
    
    
}```


```C
#include<stdio.h>
int main()
{
    int fact=1,num,i;
    printf("Enter the num here:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact*=i;

    }
    printf("The factorial of the number is: %d",fact);
}
```
