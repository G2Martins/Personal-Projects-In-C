#include <stdio.h>
#include <stdlib.h>

int main()
{
    //strcmp(strg1, strg2)==0
    //Pedra,papel ou tesoura!
    char player1[256];
    char player2[256];

    printf("\nPlayer 1, Sua Vez...");
    scanf("%s",&player1);

    printf("\nPlayer 2, Sua Vez...");
    scanf("%s",&player2);

    printf("\nAguarde, estamos analisando os dados...\n");
    if(strcmp(player1,"papel")== 0){
      if(strcmp(player2,"papel")== 0){
          printf("Empate,ambos colocaram o mesmo simbolo!");
      }else if(strcmp(player2,"tesoura")== 0){
          printf("Player 1 Perdeu! e Player 2 Ganhou!\nPor que tesoura corta papel!");
      }else if(strcmp(player2,"pedra")== 0){
          printf("Player 1 Ganhou! e Player 2 Perdeu!\nPor que papel embrulha pedra!");
      }else{
         printf("O Player 2 jogou uma informacao invalida!");
      }

    }else if(strcmp(player1,"tesoura")== 0){
      if(strcmp(player2,"papel")== 0){
          printf("Player 1 Ganhou! e Player 2 Perdeu!\nPor que tesoura corta pedra!");
      }else if(strcmp(player2,"tesoura")== 0){
          printf("Empate,ambos colocaram o mesmo simbolo!");
      }else if(strcmp(player2,"pedra")== 0){
          printf("Player 1 Perdeu! e Player 2 Ganhou!\nPor que Pedra destroe tesoura!");
      }else{
         printf("O Player 2 jogou uma informacao invalida!");
      }


    }else if(strcmp(player1,"pedra")== 0){
      if(strcmp(player2,"papel")== 0){
          printf("Player 1 Perdeu! e Player 2 Ganhou!\nPor que papel embrulha pedra!");
      }else if(strcmp(player2,"tesoura")== 0){
          printf("Player 1 Ganhou! e Player 2 Perdeu!\nPor que Pedra destroe tesoura!");
      }else if(strcmp(player2,"pedra")== 0){
          printf("Empate,ambos colocaram o mesmo simbolo!");
      }else{
         printf("O Player 2 jogou uma informacao invalida!");
      }

    }else{
        printf("Voce jogou uma informacao invalida!");
    }

    return 0;
}
