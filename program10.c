#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a>b && a>c)
    {
        printf("Greater is %d",a);
    }
    else if (b>c && b>a)
    {
        printf("Greater is %d",b);
    }
    else
    {
        printf("Greater is %d",c);
    }
}
