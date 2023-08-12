#include <stdio.h>
int main() 
{
    int i,n,r;

    printf("Enter any number: ");
    scanf("%d", &i);

    printf("Enter the power: ");
    scanf("%d", &n);

    r = pow(i,n);
    
    printf("Result is:%d", r);
    return 0;
