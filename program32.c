#include <stdio.h>
int main() 
{
    printf("First 10 odd natural no. is :");
    for(int i=1; i<=19; i++){
        if(i%2!=0)
        printf("%d ",i);
    }
    return 0;
}
