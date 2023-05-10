#include <stdio.h>
#include <stdlib.h>

int main(){
  int escolha = 0;
  
  printf("+-- CARDAPIO ---+\n");
  printf("+- 1 - Espresso   -------------------+\n");
  printf("+- 2 - Cappucino   -------------------+\n");
  printf("+- 3 - Macchiato -------------------+\n");
  printf("+- Escolha: ");
  scanf("%d", &escolha);

switch(escolha){
    case 1:
        printf("Expresso Escolhido");
        break;
    
    case 2: 
        printf("Expresso Escolhido");
        break;
    
    case 3: 
        printf("Expresso Escolhido");
        break;
    
    default: 
        printf("ERRO!! COMANDO INVALIDO!");
        break;
    }

return 0;
}
