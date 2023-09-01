#include <stdio.h>
int main() 
{
    int count=0;
    int a[]={12,34,56,78,90,56,12,56,45};
    for(int i=0; i<9; i++){
            if(a[i]==56){
                count=count+1;
            }
    }
    printf("Occurance of 56 in array is :%d",count);
    return 0;
}
