#include <stdio.h>
int main() 
{
    int a,b,c,d,e,u,i;
    printf("1. Indian \n");
    printf("2. US \n");
    printf("Select your citizenship :");
    scanf("%d",&a);
    
    if(a==1){
        printf("Enter your 12th score :");
        scanf("%d",&b);
        if(b>=90){
            printf("Congratulations you are selected\n");
        }else{
            printf("Sorry, you are not selected\n");
        }
    }
    else if(a==2){
        printf("Enter your 10th score :");
        scanf("%d",&c);
        if(c>=90){
            printf("Congratulations you are selected\n");
        }else{
            printf("Sorry, you are not selected\n");
        }
    }
    else{
        printf("Select correct option");
    }
    

    return 0;
}
