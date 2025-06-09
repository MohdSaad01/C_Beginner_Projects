#include <stdio.h>
#include <string.h>

int main(){
    char word1[20];
    printf("Enter a creepy adjective (e.g., spooky, eerie): ");
    fgets(word1,20,stdin);
    word1[strlen(word1)-1]='\0';

    char word2[20];
    printf("Enter the name of a scary creature (e.g., ghost, vampire): ");
    fgets(word2,20,stdin);
    word2[strlen(word2)-1]='\0';

    char word3[20];
    printf("Enter a scary place (e.g., attic, forest): ");
    fgets(word3,20,stdin);
    word3[strlen(word3)-1]='\0';

    char word4[20];
    printf("Enter a verb (past tense) (e.g., screamed, ran): ");
    fgets(word4,20,stdin);
    word4[strlen(word4)-1]='\0';

    char word5[20];
    printf("Enter a body part (e.g., hand, face): ");
    fgets(word5,20,stdin);
    word5[strlen(word5)-1]='\0';

    char word6[20];
    printf("Enter a loud sound (e.g., bang, crack): ");
    fgets(word6,20,stdin);
    word6[strlen(word6)-1]='\0';

    char word7[20];
    printf("Enter an object (e.g., candle, knife): ");
    fgets(word7,20,stdin);
    word7[strlen(word7)-1]='\0';

    char word8[20];
    printf("Enter another adjective (e.g., dark, haunted): ");
    fgets(word8,20,stdin);
    word8[strlen(word8)-1]='\0';

    
    char word9[20];
    printf("Enter a verb (present tense) (e.g., crawl, scream): ");
    fgets(word9,20,stdin);
    word9[strlen(word9)-1]='\0';

    printf("\nIt was a %s night when I saw a %s in the %s.\n",word1,word2,word3);
    printf("I %s and covered my %s as I heard a loud %s.\n",word4,word5,word6);
    printf("I grabbed a %s and stepped into the %s hallway.\n",word7,word8);
    printf("Suddenly, it started to %s toward me... AND then everything went dark.\n",word9);

    return 0;
}
