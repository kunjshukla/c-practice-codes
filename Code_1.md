1. Printing Hello World!

```c
#include<stdio.h>
int main()
{
    printf("Hello World!");
    return 0;
}
```


2. Sum of 2 numbers

Easy method:

```c
#include <stdio.h>
int main()
{
int num1,num2,sum;

printf("Enter num1 here:");
scanf("%d",&num1);

printf("Enter num2 here:");
scanf("%d",&num2);

sum=num1+num2;
printf("%d",sum);

return 0;
}
```

Shortcut method:

```c
#include <stdio.h>
int main()
{
int num1,num2,sum;

printf("Enter num1 here:");
scanf("%d",&num1);

printf("Enter num2 here:");
scanf("%d",&num2);


printf("%d",num1+num2);

return 0;
}
````
