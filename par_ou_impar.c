#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero;
    printf("Digite o valor do número: ");
    scanf("%d", &numero);

    switch(numero % 2){
        case 0:
            printf("O número é par\n");
            break;
        default:
            printf("O número é ímpar\n");
            break;
    }

    return 0;
}
