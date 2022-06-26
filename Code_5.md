Grading system of students:
```C
#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter the marks of the student here: ");
    scanf("%d",&a);

    if(a<100&&a>=80)
    {
        printf("Distinction");
    }
    else if(79<=a&&a>=60)
    {
        printf("First Class");
    }
    else if(59<=a&&a>=40)
    {
        printf("Second class");
    }
    else if(a<=39&&a>=0)
    {
        printf("Fail");
    }
    else
    {
        printf("Enter valid value!");
    }
    return 0;
}
```
