#include <stdio.h>
int main() {
    int n,i; 
    int res=1;  
    printf("Enter any number: ");
    scanf("%d",&n);
    
    for (i=1; i<=n; i++){
        res=res*i;
    }
    printf("Factorial is: %d\n", res);
    return 0;
}
