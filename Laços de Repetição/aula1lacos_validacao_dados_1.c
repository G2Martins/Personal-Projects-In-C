#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;

    while(i != 10){ // != ----> lê-se i diferente de 10, Loop com limite quando i for igual a 10
        
        printf("Digite 10:");
        scanf("%d", &i);
    }

    printf("FIM!!");

    return 0;
}
