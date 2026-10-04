#include <stdio.h>

int main (){

    int age = 0;
    float GPA = 0.00;
    char grade = '\0'; // this is a null terminator
    char name [30]= ""; // it will take up to 30 char or 30 bytes

    printf("enter your age : \n");
    scanf("%d",&age); //& at the address of variable age we are going to stick a value 

    printf("enter your GPA : \n");
    scanf("%f",& GPA);

    printf("enter your grade : \n");
    scanf(" %c", &grade);

    getchar(); // clear the new line chr within the input buffer
    printf("enter your name : \n");
    fgets(name, sizeof(name), stdin); // sizeof function will help you not to change the values manually again nd again

    printf("%d\n",age);
    printf("%.2f\n",GPA);
    printf("%c\n",grade);
    printf("%s\n",name);

    return 0;
}
/*if u were to use a variable and u don't assign a value then it can lead to undefined
behaviour if i don't assign the value then whichever block of memory this variables
are stored they are going to take previous values as input in c we can use the
variables in c without assign them a value while java will resist this behaviour 
scanf can not read any white spaces for writting full name we will use fgets(name,size
of the input) */ 