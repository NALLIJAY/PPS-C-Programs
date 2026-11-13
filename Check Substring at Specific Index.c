#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char A[100];
    char B[100];
    int I;

    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = 0;
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = 0;
    scanf("%d", &I);

    //===== Declare Local Variables / Functions here if required =====
    if (I >= 0 && I + strlen(B) <= strlen(A) && strncmp(A + I, B, strlen(B)) == 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    //===== Write Your Logic Here =====


}