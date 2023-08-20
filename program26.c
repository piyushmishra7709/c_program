#include <stdio.h>
int main() 
{
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    int sum=a+b+c;
    int avg=sum/3;
    printf("Sum of three numbers are :%d \n",sum);
    printf("Average of three numbers are :%d",avg);
    return 0;
}
