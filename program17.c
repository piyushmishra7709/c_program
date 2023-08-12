#include <stdio.h>
void main()
{
    int c,s,p;
    printf("Enter cost price: ", &c);
    scanf("%d", &c);
    printf("Enter selling price: ", &s);
    scanf("%d", &s);
    
    p=s-c;
    if(p>0)
    {
        printf("You are in profit of rs: %d",p);
    }
    else
    {
        printf("You are in loss of rs: %d",p);
    }
}
