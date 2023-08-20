#include <stdio.h>
int main() 
{
    int n;
    int sum1=0;
    int sum2=0;
    printf("Enter any number :");
    scanf("%d",&n);
    
    for (int i=1; i<=n; i++){
    if(i%2==0){
    sum1 = sum1+i;
    }
    else{
    sum2 = sum2+i;
    }
    }
    printf("Sum of even number from 1 to %d is :%d \n", n,sum1);
    printf("Sum of odd number from 1 to %d is :%d ", n,sum2);
    return 0;
}
