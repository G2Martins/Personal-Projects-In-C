#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;

    while(i < 10){ 
        
        printf("Digite um valor maior que 10:");
        scanf("%d", &i);
    }

    printf("FIM!!");

    return 0;
}
