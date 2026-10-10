#include <stdio.h>

int main (){

    // Temperature conversion  
    char choice = '\0';
    float celsius = 0.0f;
    float fahrenheit = 0.0f;
    printf("Temperature Conversion Program ");
    printf("C. celsius to fahrenheit\n");
    printf("F. fahrenheit to celsius \n");
    printf("Is the temp is in F or C ? :");
    scanf("%c",&choice);

    if(choice == 'C'){
        // C to F 
        printf("Enter the temp in celsius : \n");
        scanf("%f",&celsius);
        fahrenheit = (celsius * 9/5) + 32; // convert f to c 
        printf("%.1f celsius is eq to %.1f fahrenheit /n ", celsius, fahrenheit );
    }
    else if (choice == 'F'){
        // F to C 
        printf("Enter the temp in celsius : \n");
        scanf("%f",&fahrenheit);
        celsius = (fahrenheit - 32) * 5/9; // convert C to F
        printf("%.1f fahrenheit is eq to %.1f celsius /n ", fahrenheit,celsius);
    }
    else {
        printf("You have entered the invalid input ");
    }

    return 0;
}