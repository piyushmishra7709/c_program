#include <stdio.h>
int main() 
{
    int n;
    int sum;
    printf("Enter any number :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("Sum of odd no. from 1 to %d is :%d",n,sum);
    return 0;
}
