 
 
 ```C
 #include<stdio.h>
int main()
{
    int counter=0,i,wei.hei,p[5];
    int (i=0;i<5;i++)
    {
        printf("Enter the height of person[%d] : ",i);
        scanf("%d",&height);
        printf("Enter the weight of the person[%d] : ",i);
        scanf("%d",&weight);
        if(height>170 && weight<50)
        {
            counter++;
        }
    }
    printf("There are %d people satisfying the condition.",counter);

}
```



```C
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number here: ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {printf("the number is not prime.");
        break;
        }
        
        else if(num==i)
        {printf("The num is prime.");}
    }
    

}
```


