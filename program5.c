#include <stdio.h>
#include <math.h>

int main()
{
    int p,t;
    float ta,ci,r;
    printf("Enter principle amount: ");
    scanf("%d", &p);
    printf("Enter time period (in years): ");
    scanf("%d", &t);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    
    printf("\n");
    ta=p*pow((1+r/100),t);
    ci=ta-p;
    printf("Compound Interest for %d years will be: %f" ,t,ci);
    return 0;
}
