#include <stdio.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[1000];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====
    int len, i;
    len = strlen(s);

    for (i = 0; i < len / 2; i++)
    {
        printf("%c", s[i]);
    }

    //===== Write Your Logic Here =====


}