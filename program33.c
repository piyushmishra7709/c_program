#include <stdio.h>
int main() 
{
    int a,b,c,d,e,f,g,h,i,j;
    printf("Enter ten numbers :");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&f);
    scanf("%d",&g);
    scanf("%d",&h);
    scanf("%d",&i);
    scanf("%d",&j);
    
    int sum=a+b+c+d+e+f+g+h+i+j;
    float avg=sum/10.0f;
    printf("Sum of ten numbers are :%d \n",sum);
    printf("Average of ten numbers are :%f",avg);
    return 0;
}
