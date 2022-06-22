3. Area of a rectangle

```C
#include <stdio.h>
int main()
{
int len,wid,area;

printf("Enter the length here: ");
scanf("%d",&len);

printf("Enter the width here: ");
scanf("%d",&wid);

area=len*wid;
printf("Area of the rectangle is: %d",area);
return 0;

}
```

4. Convert Celsius to Fahrenheit


```C

#include <stdio.h>
int main()
{
    int tempC,tempF;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%d",&tempC);

    tempF= (1.8*tempC)+32;
    printf("The temperature in Fahrenheit: %d",tempF);
    return 0;
}
```

