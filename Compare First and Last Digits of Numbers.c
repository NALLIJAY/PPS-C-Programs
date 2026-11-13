#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    //===== Declare Local Variables / Functions here if required =====
    if (a / 100 < b % 10)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    //===== Write Your Logic Here =====


}