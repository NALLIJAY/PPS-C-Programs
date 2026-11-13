#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char word[1000];
    scanf("%s", word);

    //===== Declare Local Variables / Functions here if required =====
    int len, i;
    len = strlen(word);
    for (i=0; i < len; i ++)
    {
        printf("*");
    }


    //===== Write Your Logic Here =====


}