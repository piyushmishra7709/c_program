#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
    return 0;
}
    void add(a,b)
    {
    int c=a+b;
    printf("Addition is: %d \n",c);
    }
     void sub(a,b)
    {
    int c=a-b;
    printf("Subtraction is: %d \n",c);
    }
    void mul(a,b)
    {
    int c=a*b;
    printf("Multiplication is: %d \n",c);
    }
    void div(a,b)
    {
    int c=a/b;
    printf("Division is: %d \n",c);
    }
   
