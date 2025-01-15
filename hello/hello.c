#include <stdio.h> // include output input
#include <stdbool.h> // utilizzo dei bool


//macros
#define DEBUG_PRINT(x) printf("[DEBUG] - ");printf("%s",x); printf("\n");
#define NEW_LINE printf("\n");
#define PI_GRECO 3.1459265358

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

    int i=10;

    printf("my integer value is %d", i );

    NEW_LINE;

    float f=10.0;
    printf("enter a real number: ");
    //& utilizziamo l'indirizzo della variabile perchè scanf deve andare a modificare il valore nell’indirizzo di locazione
    scanf("%f", &f);
    NEW_LINE;
    printf("my float value %f", f);

    NEW_LINE;
    printf("=== AREA CERCHIO ===");
    NEW_LINE;
    printf("inserisci il raggio: ");
    //& utilizziamo l'indirizzo della variabile perchè scanf deve andare a modificare il valore nell’indirizzo di locazione
    scanf("%f", &f);
    NEW_LINE;
    float area= f*f*PI_GRECO;
    f= f*f*PI_GRECO;
    float funny= (f+f-PI_GRECO) / 10.0;

    printf("area circle value %f", area);
    NEW_LINE;
    printf("area circle value %f", f);
    NEW_LINE;
    printf("calcolo con tutti gli operatori aritmetici %f", funny);
    NEW_LINE;

    DEBUG_PRINT("Programma terminato");
    NEW_LINE;

    return 0;
}