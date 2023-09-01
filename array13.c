#include <stdio.h>
int main() 
{
    int count=0;
    int a[]={12,34,56,78,90,56,12,56,45};
    for(int i=0; i<9; i++){
                count=count+1;
    }
    printf("Total no. of element in array is :%d",count);
    return 0;
}
