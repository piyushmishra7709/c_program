#include <stdio.h>
void add();
int main()
{
    add();
    sub();
    mul();
    div();
    return 0;
}
    void add()
    {
    int a=10;
    int b=5;
    int c=a+b;
    printf("Addition is: %d \n",c);
    }
     void sub()
    {
    int a=10;
    int b=5;
    int c=a-b;
    printf("Subtraction is: %d \n",c);
    }
    void mul()
    {
    int a=10;
    int b=5;
    int c=a*b;
    printf("Multiplication is: %d \n",c);
    }
    void div()
    {
    int a=10;
    int b=5;
    int c=a/b;
    printf("Division is: %d \n",c);
    }
   
