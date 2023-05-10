#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 
int maximo = 14;
int minimo = 5;

printf("+-- GERADOR DE NUMERO ALEATORIO ---+\n");

srand(time(NULL));
                                // 14    - 5      + 1 = 10
int numero_aleatorio = (rand() % (maximo - minimo + 1)) + minimo;
// Então teremos um numero de 0 a 9 + 5
// Ou Seja, o mínimo será 5 e o máximo será 14

printf("Numero Gerado: |%d|", numero_aleatorio);

return 0;
}
