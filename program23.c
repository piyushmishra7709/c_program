#include <stdio.h>
int main() 
{
    int p,r,t;
    printf("Enter principle amount: ");
    scanf("%d",&p);
    printf("Enter rate of interest: ");
    scanf("%d",&r);
    printf("Enter time duration: ");
    scanf("%d",&t);
    
    int si=(p*r*t)/100;
    printf("Simple Interest is :%d rs",si);
    return 0;
}
