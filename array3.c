#include <stdio.h>
int main() 
{
    int i,j;
    int a[]={99,210,73,426,52,163};
    int large=a[0];
    int slarge=a[0];
    int small=a[0];
    int ssmall=a[0];
    
    for(i=0; i<6; i++){
        if(a[i]!=slarge)
        if(a[i]>large){
            large=a[i];
        }
    }
    for(j=0; j<6; j++){
        if(a[j]!=large)
        if(a[j]>slarge){
            slarge=a[j];
        }
    }
    
    printf("Second largest element is :%d\n",slarge);
    
    for(i=0; i<6; i++){
        if(a[i]<small){
            small=a[i];
        }
    }
    for(j=0; j<6; j++){
        if(a[j]!=small)
        if(a[j]<ssmall){
            ssmall=a[j];
        }
    }
    
    printf("Second smallest element is :%d",ssmall);
    return 0;
}
