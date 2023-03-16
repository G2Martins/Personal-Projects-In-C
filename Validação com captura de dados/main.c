#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[256];
  int idade;

  printf("Ola! Qual o seu nome?\n");
  scanf("%s",nome);

  printf("\nQual a sua idade?\n");
  scanf("%d",&idade);

  printf("Nome: %s\nIdade: %d\n",nome,idade);

  printf("\nAguarde enquanto lemos seus dados...");

  printf("\nA Primeira letra do seu nome: %c",nome[1]);

  if(idade >= 18){
        printf("\n voce e um Adulto!");
  }else if (idade >= 12){
      printf("\nvoce e um Adolescente!");
  }else if (idade >= 2){
      printf("\nvoce e uma Crianca!");
  }else{
      printf("\nvoce e um Bebe!");
  }

    return 0;
}
