#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 
    printf("+-- GERADOR DE NUMERO ALEATORIO ---+\n");

    srand(time(NULL));

    int numero_aleatorio = (rand() % 10) + 5; //Cria um número aleatório entre 5 a 14

    printf("Numero Gerado: |%d|", numero_aleatorio);

    return 0;
}
