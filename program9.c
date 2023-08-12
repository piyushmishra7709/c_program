#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b)
    {
        printf("Greater is %d",a);
    }
    else
    {
        printf("Greater is %d",b);
    }
}
