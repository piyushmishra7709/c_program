#include <stdio.h>
int main() 
{
    int a[10];
    for(int i=0; i<10; i++){
        printf("Enter elements :");
        scanf("%d",&a[i]);
    }
    printf("******All Elements******\n");
    for(int j=0; j<10; j++){
        printf("%d\n",a[j]);
    }
    return 0;
}
