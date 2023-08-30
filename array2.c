#include <stdio.h>
int main() 
{
    int i,j;
    int a[]={100,210,307,46,505,630};
    int large=a[0];
    int small=a[0];
    
    for(i=0; i<6; i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    for(j=0; j<6; j++){
        if(a[j]!=large)
        if(a[j]>small){
            small=a[j];
        }
    }
    printf("Largest two element are :%d and %d",large,small);
    return 0;
}
