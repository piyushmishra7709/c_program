#include <stdio.h>
int main() 
{
    int n;
    int sum;
    printf("Enter any number :");
    scanf("%d",&n);

    for(int i=2; i<=n; i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("Sum of even no. from 1 to %d is :%d",n,sum);
    return 0;
}
