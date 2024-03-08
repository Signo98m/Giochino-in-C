#include <stdio.h>

int main() {
    printf("Benvenuto al gioco di domande e risposte!\n");
    
    char scelta;
    int punteggio_totale = 0;
    
    do {
        printf("\nMenu:\n");
        printf("A) Iniziare una nuova partita\n");
        printf("B) Uscire dal gioco\n");
        printf("Scelta: ");
        scanf(" %c", &scelta);
        
        if (scelta == 'A' || scelta == 'a') {
            printf("Inserisci il tuo nome: ");
            char nome[50];
            scanf("%s", nome);
            printf("\nCiao, %s! Cominciamo la partita.\n", nome);
            
            int punteggio_partita = 0;
            
            printf("\nDomanda 1: Dragon Ball è stato scritto da?\n");
            printf("A) Gensis Khan\nB) Akira Toriyama\nC) Kim Jong-un\n");
            char risposta1;
            scanf(" %c", &risposta1);
            if (risposta1 == 'B' || risposta1 == 'b') {
                printf("Esatto!\n");
                punteggio_partita++;
            } else {
                printf("Sbagliato!\n");
            }
            
            printf("\nDomanda 2: Qual è la capitale del Giappone?\n");
            printf("A) Tokyo\nB) Pechino\nC) Seul\n");
            char risposta2;
            scanf(" %c", &risposta2);
            if (risposta2 == 'A' || risposta2 == 'a') {
                printf("Esatto!\n");
                punteggio_partita++;
            } else {
                printf("Sbagliato!\n");
            }
            
            printf("\nDomanda 3: Cosa non va nella carbonara?\n");
            printf("A) Pancetta\nB) Guanciale\nC) Prosciutto\n");
            char risposta2;
            scanf(" %c", &risposta2);
            if (risposta2 == 'A' || risposta2 == 'a') {
                printf("Esatto!\n");
                punteggio_partita++;
            } else {
                printf("Sbagliato!\n");
            }
            
            printf("\nIl tuo punteggio in questa partita è: %d\n", punteggio_partita);
            punteggio_totale += punteggio_partita;
            printf("Il tuo punteggio totale è: %d\n", punteggio_totale);
        } else if (scelta != 'B' && scelta != 'b') {
            printf("Scelta non valida. Riprova.\n");
        }
        
    } while (scelta != 'B' && scelta != 'b');
    
    printf("Grazie per aver giocato!\n");
    
    return 0;
}
