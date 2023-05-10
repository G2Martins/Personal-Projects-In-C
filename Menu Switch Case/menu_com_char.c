#include <stdio.h>
#include <stdlib.h>

int main(){
  char escolha = " ";
  
  printf("+-- CARDAPIO ---+\n");
  printf("+- a - Espresso   -------------------+\n");
  printf("+- b - Cappucino   -------------------+\n");
  printf("+- c - Macchiato -------------------+\n");
  printf("+- Escolha: ");
  scanf("%c", escolha);

switch(escolha){
    case 'a':
        printf("Expresso Escolhido");
        break;
    
    case 'b': 
        printf("Expresso Escolhido");
        break;
    
    case 'c': 
        printf("Expresso Escolhido");
        break;
    
    default: 
        printf("ERRO!! COMANDO INVALIDO!");
        break;
    }

return 0;
}
