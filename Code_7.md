15. Sum of First and last digit of any number:
```C
#include<stdio.h>
int main()
{
    int first,last,num,sum=0;
    printf("Enter the number here:");
    scanf("%d",&num);
    last= num % 10;
    while(num>9)
    {
        num=num/10;
        
    }
    sum=num+last;
    printf("The sum is: %d",sum);
    
    return 0;
}
```
16. Average of n numbers(With array method):
```C
#include<stdio.h>
int main()
{
    int num,sum=0,i,avg;
    printf("Enter the no. of values to be entered: ");
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;i++)
    {
        printf("Enter the number arr[%d] here: ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/num;
    printf("The average of the numbers is: %d",avg);
    return 0;
}
```
17. Average using loops:
```C
#include<stdio.h>
int main()
{
    int n,sum=0,i=0,val;
    printf("How many numbers your want to enter: ");
    scanf("%d",&n);
    while(i<n)
    {
        printf("Enter no[%d]: ",i+1);
        scanf("%d",&val);
        sum=sum+val;
        i++;
    }
    printf("Sum = %d",sum);
    printf("Average = %.2f",((float)sum)/n);
    return 0;
}
```
