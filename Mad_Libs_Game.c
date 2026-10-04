#include <stdio.h> //gives us printf, scanf, fgets
#include <string.h> //gives us strlen, strcspn, strcpy ..

int main (){

    // MAD LIBS GAME 

    char noun [50] = ""; // prsn place and thing 
    char verb [50] = ""; // action occerence or a state of being
    char adjectives1 [50] = ""; // it describes something link fast slow loud nd quite
    char adjectives2 [50] = ""; 
    char adjectives3 [50] = ""; 

    printf("Enter a adjective here (bike or car) : ");
    fgets(adjectives1,sizeof(adjectives1),stdin);
    adjectives1[strlen(adjectives1)-1 ] = '\0';

    printf("Enter a noun (place u would love to visit ) : ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1 ] = '\0';

    printf("Enter a adjective here (describing the view of place) : ");
    fgets(adjectives2,sizeof(adjectives2),stdin);
    adjectives2[strlen(adjectives2)-1 ] = '\0';

    printf("Enter a verb here ( felling or emotion ending with -ing) : ");
    fgets(verb,sizeof(verb), stdin);
    verb[strlen(verb)-1 ] = '\0';

    printf("Enter a adjective here (describe the felling) : ");
    fgets(adjectives3,sizeof(adjectives3),stdin);
    adjectives3[strlen(adjectives3)-1 ] = '\0';

    printf("\nToday we went for a %s ride with my frnds in  ",adjectives1);
    printf("%s the trip and the road leads to %s was amazing \n",noun,noun);
    printf("%s was %s and we all were %s\n",noun ,adjectives2, verb);
    printf("i was %s! the time with my friend \n",adjectives3); 

    return 0;
}