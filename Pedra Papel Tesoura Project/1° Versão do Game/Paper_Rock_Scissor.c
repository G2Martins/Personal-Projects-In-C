#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jogada(char nome_jogador[31], int* score_jogador, int* score_computador, int* i);

int tela_keep_playing(){
    int input;
    printf("[1]. Continua \n[2]. Sair \nEscolha: ");
    scanf("%d", &input);

    if(input == 1){
        return input;
    }

    return 2;
}

void jogada(char nome_jogador[31], int* score_jogador, int* score_computador, int* i) {
  int jogada;
  printf("+--Escolha a sua jogada %s --\n", nome_jogador);
  printf("+- 1 - Pedra   --------------\n");
  printf("+- 2 - Papel   --------------\n");
  printf("+- 3 - Tesoura --------------\n");
  printf("+- Jogada: ");
  scanf("%d", &jogada);
  printf("\n");

  srand(time(NULL));
  int jogada_computador = rand() % 3 + 1;

  if (jogada == jogada_computador) {
    printf("Empate!\n\n");
    (*i)--;
  } else if ((jogada == 1 && jogada_computador == 3) ||
             (jogada == 2 && jogada_computador == 1) ||
             (jogada == 3 && jogada_computador == 2)) {
    printf("Parabéns %s, você ganhou essa rodada!\n\n", nome_jogador);
    (*score_jogador)++;
  } else {
    printf("Computador ganhou essa rodada!\n\n");
    (*score_computador)++;
  }
 
}
void menu (){

char player_name[31] = "";
int deu_certo = 0;
int escolha = 0;
int score_jogador = 0;
int score_computador = 0;  
  
  printf("\n\n");
  printf("+---------- S E J A  B E M - V I N D O -----------+\n");
  printf("+      A 0  N O S S O  J O G O  D E  P E D R A    +\n");
  printf("+           P A P E L  E  T E S O U R A           +\n");
  printf("+-------------------------------------------------+\n");
  printf("+  Digite o seu nome:");
  deu_certo = scanf("%s", player_name);

  printf("\n\n");
  printf("+------------------------------+\n");
  printf("        Muito bem %s!           \n", player_name);
  printf("+                              +\n");
  printf("+    1 - Vamos Começar?        +\n");
  printf("+    2 - Sair                  +\n");
  printf("+------------------------------+\n");
  printf("Operacao:");
  deu_certo = scanf("%d", &escolha);
  printf("\n\n");

switch (escolha){
  case 1:
    for (int i = 0; i < 5; i++) {
      printf("\n----- Rodada %d ------\n", i+1);
      jogada(player_name, &score_jogador, &score_computador, &i);
      printf("%s %d x %d Computador\n", player_name, score_jogador, score_computador);
      
    if (score_jogador == 4) {
        printf("\n%s venceu o jogo!\n\n", player_name);
        break;
    }else if (score_computador == 4) {
        printf("\nComputador venceu o jogo!\n\n");
        break;
      }
   }
   break;

  case 2:
    system("exit");
    printf("\nFinalizando...\n\n");
    exit(0); 
  
  default:
    
    printf("\nComando invalido, tente novamente!\n\n");
    system("pause");
    system("clear");
    menu();
    break;
  } 
}
int main() {
    
    while (1 == 1){
        
    menu();
    
    int a = tela_keep_playing(); 
        if(a == 2){
            printf("\nFinalizando...\n\n");
            return 0;
        }
    system("clear");
    }
    
  system("pause");
  return 0;
}
