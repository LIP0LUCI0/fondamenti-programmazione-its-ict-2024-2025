#include <stdio.h> // include output input
#include <stdbool> // utilizzo dei bool
//main
/* main */
int main(){

    //variabile di 32 caratteri
    char name[32];

    // richiesta per il nome
    printf("Enter a name: ");

    //lettura dell'input dello user
    scanf("%s", name);

    // stampare il messaggio con il nome digitato dallo user
    printf("\nHello\t%s\n\n\n", name);

    printf("Hello World\n\n\n");

    return 0;
}