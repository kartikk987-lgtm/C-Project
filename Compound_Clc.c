#include <stdio.h>
#include <math.h>

int main (){

    double principal = 0.0;
    double rate = 0.0;
    int years = 0.0;
    double timescoumpound = 0.0;
    double total = 0.0;

    printf("compound interest calc : \n");

    printf("Enter the principal (P) : ");
    scanf("%lf",&principal);

    printf("Enter the rate % (r) : ");
    scanf("%lf",&rate);
    rate = rate / 100;

    printf("Enter the # of years: ");
    scanf("%d",&years);

    total= principal * pow(1+rate /timescoumpound , timescoumpound * years);

    printf(" After %d years , the total will be $%.2lf",years,total);
    
    

    return 0;
}