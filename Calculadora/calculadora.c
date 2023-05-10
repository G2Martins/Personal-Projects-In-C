#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void adicao(){

    float valor_1; 
    float valor_2; 
    float resultado;

  printf("\nDigite o 1 valor: ");
  scanf("%f", &valor_1);
  
  printf("Digite o 2 valor: ");
  scanf("%f", &valor_2);
  
  resultado = valor_1 + valor_2;
  
  printf("\nResultado: %.2f\n\n ", resultado);
  system("pause");
  system("cls");
  menu();
} 

void subtracao(){
    float valor_1;
    float valor_2; 
    float resultado;

  printf("\nDigite o 1 valor: ");
  scanf("%f", &valor_1);
  
  printf("Digite o 2 valor: ");
  scanf("%f", &valor_2);
  
  resultado = valor_1 - valor_2;
  
  printf("\nResultado: %.2f\n\n ", resultado);
  system("pause");
  system("cls");
  menu();

}

void divisao() {
    
    float valor_1;
    float valor_2; 
    float resultado;

  printf("\nDigite o 1 valor: ");
  scanf("%f", &valor_1);
  
  printf("Digite o 2 valor: ");
  scanf("%f", &valor_2);
  
  resultado = valor_1 / valor_2;
  
  printf("\nResultado: %.2f\n\n ", resultado);
  system("pause");
  system("cls");
  menu();
}

void multiplicacao() {
    float valor_1;
    float valor_2; 
    float resultado;

  printf("\nDigite o 1 valor: ");
  scanf("%f", &valor_1);
  
  printf("Digite o 2 valor: ");
  scanf("%f", &valor_2);
  
  resultado = valor_1 * valor_2;
  
  printf("\nResultado: %.2f\n\n ", resultado);
  system("pause");
  system("cls");
  menu();
}

void potenciacao() {
    float base; 
    float expoente; 
    float resultado;

  printf("\nDigite a base: ");
  scanf("%f", &base);
  
  printf("Digite o expoente: ");
  scanf("%f", &expoente);
 
  resultado = pow(base, expoente);
  
  printf("\nResultado: %.2f\n\n ", resultado);
  system("pause");
  system("cls");
  menu();
}

void raiz() {
  float valor_1;
  float resultado;

  printf("\nEntre com o valor:");
  scanf("%f", &valor_1);
 
  resultado = sqrt(valor_1);
  
  printf("\nResultado: %f\n\n ", resultado);
  system("pause");
  system("cls");
  menu();
}

void menu() {

    int escolha = 0;

    printf("+----Bem vindo a calculadora em C----+\n");
    printf("+                                    +\n");
    printf("+ Selecione uma operacao matematica: +\n");
    printf("+     1- Adicao                      +\n");
    printf("+     2- Subtracao                   +\n");
    printf("+     3- Divisao                     +\n");
    printf("+     4- Multiplicacao               +\n");
    printf("+     5- Potenciacao                 +\n");
    printf("+     6- Raiz Quadrada               +\n");
    printf("+     7- Sair                        +\n");
    printf("+------------------------------------+\n\n");
    printf("Operacao: ");
    scanf("%d", &escolha);

switch (escolha) {
    case 1:
        adicao();
        break;

    case 2:
        subtracao();
        break;
    
    case 3:
        divisao();
        break;
    
    case 4:
        multiplicacao();
        break;
    
    case 5:
        potenciacao();
        break;
    
    case 6:
        raiz();
        break;
        
    case 7:
        system("exit");
        printf("\nFinalizando...\n\n");
        break;
    
    default:
        printf("\nComando invalido, tente novamente!\n\n");
        system("pause");
        system("clear");
        menu();
    break;

  }
}

int main(){
  menu();
  system("pause");
  return 0;
}  
