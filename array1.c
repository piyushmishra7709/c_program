#include <stdio.h>
int main() 
{
    int a[]={100,210,307,46,505,630};
    int large=a[0];
    for(int i=0; i<6; i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    printf("Largest element in array is :%d",large);
    return 0;
}
