#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 
    printf("+-- GERADOR DE NUMERO ALEATORIO ---+\n");

    srand(time(NULL));

    int numero_aleatorio_1 = rand() % 7; //Cria um número aleatório entre 0 a 6

    printf("Numero Gerado: |%d|", numero_aleatorio);

    return 0;
}
