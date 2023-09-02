#include <stdio.h>
int main() 
{
    int maxcount=0;
    int element=0;
    int a[]={12,34,34,56,78,90,45,23,1,34,4,4};
    for(int i=0; i<12; i++){
        int count=0;
        for(int j=0; j<12; j++){
        
        if(a[i]==a[j]){
            count=count+1;
        }
    }
    if(count>maxcount){
        maxcount=count;
        element=a[i];
    }
    }
    printf("Count  of %d is %d\n",element,maxcount);

    return 0;
}
