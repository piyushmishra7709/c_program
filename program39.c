#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int total,avg;
    float per;
    
    printf("Enter English marks :");
    scanf("%d",&a);
    printf("Enter Computer marks :");
    scanf("%d",&b);
    printf("Enter Physics marks :");
    scanf("%d",&c);
    printf("Enter Chemistry marks :");
    scanf("%d",&d);
    printf("Enter Biology marks :");
    scanf("%d",&e);
    
    total=a+b+c+d+e;
    avg=(total)/5;
    per=(total / 500.0f)*100;
    printf("______________________________\n");
    printf("Total marks obtained is :%d \n",total);
    printf("Average marks obtained is :%d \n",avg);
    printf("Percentage is :%f",per);
    return 0;
}
