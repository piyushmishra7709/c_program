#include <stdio.h>
int main() 
{
    float a,b;
    printf("Enter first number :");
    scanf("%f",&a);
    printf("Enter second number :");
    scanf("%f",&b);
    
    float c=a/b;
    printf("Quotient is :%f \n",c);
    int d= (int)a % (int)b;
    printf("Reminder is :%d",d);
    return 0;
}
