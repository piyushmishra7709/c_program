#include <stdio.h>
int main() 
{
    int a[]={12,34,56,42,12,68,34,12,56};
    for(int i=0; i<9; i++){
        int num=a[i];
        int count=0;
        for(int j=0; j<9; j++){
            if(a[j]==num){
                count=count+1;
            }
        }
        printf("Occurance of %d in array is %d\n",a[i],count);
    }
    return 0;
}
