#include <stdio.h>
int main() 
{
    int a[]={100,210,307,46,505,630};
    int large=a[0];
    int small=a[0];
    int diff=0;
    for(int i=0; i<6; i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    for(int j=0; j<6; j++){
        if(a[j]<small){
            small=a[j];
        }
    }
    diff=large-small;
    printf("Difference between largest & smallest element in array is :%d",diff);
    return 0;
}
