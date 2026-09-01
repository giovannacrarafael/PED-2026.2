#include <stdio.h>

/*
20/2 = 10 resto [0]
10/2 = 5  resto [0]
5/2 = 2 resto [1]
2/2 = [1] resto [0] CASO BASE --> O QUOCIENTE É MENOR QUE 2

*/

void dec2bin(int n){

        if (n < 2){ // CASO BASE: se o número for 0 ou 1, não retorna nada
            printf("%d", n);
            return;
        }

        dec2bin(n / 2); //chama a função se não tem o caso base. É a divisão por 2.
        printf("%d", n % 2); //mostra o resto da divisão porque ele é necessário para os bits. Tem que ser depois da função para retornar na ordem.
    }


int main(){

    int n;
    printf("Digite um número natural: ");
    scanf("%d", &n);

    if (n < 0){
        printf("O número não pode ser negativo. ");
    } else {
        printf("O número binário correspondente a %d é ", n);
        dec2bin(n);
    }

    return 0;
}


