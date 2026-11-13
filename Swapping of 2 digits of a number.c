#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int x;
    scanf("%d", &x);

    //===== Declare Local Variables / Functions here if required =====
    int ten, hund;
    ten = x/10;
    hund = x%10;
    printf("%d%d",hund,ten);

    //===== Write Your Logic Here =====


}