#include <stdio.h>
int main() 
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    
    for (int i=1; i<=10; i++){
        int mt=n*i;
        printf("Multiplication table is :%d \n",mt);
    }
    return 0;
}
