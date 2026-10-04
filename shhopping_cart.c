#include <stdio.h>
#include <string.h> // fxn related to strings 

int main (){

    // Shopping Cart Program 

    char item [50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would u like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)- 1] ='\0';

    printf("What is the price of each?: ");
    scanf("%f", &price);

    printf("how many would u like to buy?: ");
    scanf("%d",&quantity);

    total = price * quantity ;
    printf("\nyou bought %d %s \n", quantity, item);
    printf("%c%.2f", currency , total); //float * int gives float

    return 0;
}