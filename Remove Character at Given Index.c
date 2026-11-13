#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char word[100];
    int index;

    //===== Declare Local Variables / Functions here if required =====


    scanf("%s", word);
    scanf("%d", &index);

    //===== Write Your Logic Here =====
    int i;
    int len = strlen(word);

    for (i = index; i < len - 1; i++)
    {
        word[i] = word[i + 1];
    }

    word[len - 1] = '\0';

    printf("%s", word); 

}