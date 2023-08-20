#include <stdio.h>
int main() 
{
    int a;
    printf("Enter perfect square number :");
    scanf("%d",&a);
    
    int res=sqrt(a);
    printf("Square root of %d is :%d",a,res);
    return 0;
}
