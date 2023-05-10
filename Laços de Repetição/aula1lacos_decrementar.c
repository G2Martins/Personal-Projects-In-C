#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 10;

    while(i > -1){
        
        printf("%d \n",i);
        i = i - 1; // PODEMOS UTILIZAR TAMBÉM i-- Para decrementer 1 OU --> i -= 1. Para decrementar de 3 em 3 --> i = i - 3.
        
    }

    return 0;
}
