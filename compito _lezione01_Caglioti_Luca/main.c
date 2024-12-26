#include <stdio.h>


int main(){

    char nome[50];
    char cognome[50];

    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);

    printf("\nInserisci il tuo cognome: ");
    scanf("%s", cognome);

    printf("\nBenvenuto, %s %s!", nome, cognome);
    printf("\nGrazie per aver usato il nostro programma.\n\n");

    char augur_message[320]; // Array per contenere il messaggio di agurio
    augur_message[0] = '\0'; // Inizializziamo la stringa come vuota

    // Creazione dellee lettere del messaggio di augurio su ogni riga
    for(int i=0; i<5; i++){

        //Lettera B
        strcat(augur_message, (i==0 || i==4 || (i%2)==0? "BBBBB  " : "B    B "));

        //Lettera U
        strcat(augur_message, (i<4? "U   U " : " UUU  "));

        //Lettera O
        strcat(augur_message, (i==0 || i==4? "OOOOO " : "O   O "));

        //Lettera N
        strcat(augur_message, "N");
        strcat(augur_message, (i==0 || i==4? "   N " : (i==1? "N  N " : (i==2? " N N " : (i==3? "  NN " : "")))));

        //Lettera E
        strcat(augur_message, (i==0 || i==4? "EEEEE\t  " : (i%2==0? "EEEE \t  " : "E    \t  ")));

        //Lettera F
        strcat(augur_message, "F");
        strcat(augur_message, (i==0? "FFFF " : (i==2? "FF   " : "     " )));

        //Lettera E
        strcat(augur_message, (i==0 || i==4? "EEEEE " : (i%2==0? "EEEE  " : "E     ")));

        //Lettera S
        strcat(augur_message, (i==0 || i==4 || (i%2)==0? " SSSS  " : (i==1? "S      " : "     S ")));

        //Lettera T
        strcat(augur_message, (i==0 ? "TTTTT " : "  T   "));

        //Lettera E
        strcat(augur_message, (i==0 || i==4? "EEEEE\t  " : (i%2==0? "EEEE \t  " : "E    \t  ")));

        //Newline per la nuova riga
        strcat(augur_message, "\n");
    }

    // Stampa l'output accumulato
    printf("%s\n", augur_message);

    int i,spazi,foglie,tronco;
    for(i=0;i<15;i++)
    {
        for(spazi=16-i;spazi>0;spazi--) printf("%c",' ');
        for(foglie=(i*2)+1;foglie>0;foglie--) printf("%c",'A');
        printf("\n"); 
    }

    for(i=15;i<19;i++){
        for(spazi=0;spazi<13;spazi++) printf("%c",' ');
        for(tronco=0;tronco<6;tronco++) printf("%c",'M');
        printf("\n");  
    }

    printf("\n\n\n");

   return 0;

}
