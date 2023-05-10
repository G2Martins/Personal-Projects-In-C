#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 
    printf("\n\n+-- GERADOR DE JOGADAS ALEATÓRIAS DE UM DADO ---+\n");

    srand(time(NULL));

    int numero_aleatorio_1 = (rand() % 6) + 1; //Cria um número aleatório entre 1 a 6

    printf("\nNumero Aleatorio 1: |%d|\n", numero_aleatorio_1);

    int numero_aleatorio_2 = (rand() % 6) + 1; //Cria um número aleatório entre 1 a 6

    printf("\nNumero Aleatorio 2: |%d|\n", numero_aleatorio_2);

    int numero_aleatorio_3 = (rand() % 6) + 1; //Cria um número aleatório entre 1 a 6

    printf("\nNumero Aleatorio 3: |%d|\n", numero_aleatorio_3);

    int soma = numero_aleatorio_1 + numero_aleatorio_2 + numero_aleatorio_3;

    printf("\nNumeros Gerados: |%d| |%d| |%d|\n e a sua soma igual = |%d|\n", numero_aleatorio_1, numero_aleatorio_2, numero_aleatorio_3, soma);

    return 0;
}
