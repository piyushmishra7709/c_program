#include <stdio.h>
int main() 
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    
    for (int i=1; i<n-1; i++){
        int res = i + 2;
        if (res % 2 != 0){
            printf("Odd number:%d \n",res);
        }
    }
    return 0;
}
