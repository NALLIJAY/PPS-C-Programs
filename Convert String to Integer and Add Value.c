#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    char s[100];
    scanf("%s", s);

    //===== Declare Local Variables / Functions here if required =====
    long long n;
    n = atoi(s);
    
    printf("%lld", n + 10);

    //===== Write Your Logic Here =====


    return 0;
}