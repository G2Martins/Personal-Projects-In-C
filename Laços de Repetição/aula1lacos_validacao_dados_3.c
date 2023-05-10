#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0;
    int b = 0;

    while(a < 10 || b < 10){ 
        
        printf("\nDigite dois valores maiores que 10:\n");
        
        printf("Digite um valor para A:\n");
        scanf("%d", &a);

        printf("Digite um valor para B:\n");
        scanf("%d", &b);

        printf("Numeros Digitados: |%d| |%d|", a, b);
    }

    printf("\nFIM!!");

    return 0;
}
