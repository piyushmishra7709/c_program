#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any number :");
    scanf("%d",&n);
    printf("Factors is :");
    for(int i=1; i<=n; i++){
    if(n%i==0)
    
    printf("%d ",i);
    }
    return 0;
}
