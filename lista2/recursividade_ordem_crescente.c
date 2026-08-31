#include <stdio.h>
#include <math.h>

/*
CASO BASE -> A > B, porque, se os números forem maiores que b, não tem intervalo crescente
EXEMPLO DE A -> 2, DE B -> 7

2
2, 3 (a + 1)
2, 3, 4
2, 3, 4, 5
2, 3, 4, 5, 6
2, 3, 4, 5, 6, 7

*/

void intervalo(int a, int b) // a void não retorna nenhum cálculo e não precisa declarar o tipo da função
{
    if (a > b){
        return; //retorna nada porque o número não atende à especificação
    }
    printf("%d", a); // tem que imprimir primeiramente o primeiro número da sequência para ir imprimindo os demais na ordem crescente
    intervalo(a + 1, b); // se colocar o prinft depois da função, a ordem fica decrescente  
}

int main()
{
    int a, b;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);

    if (a < b){
        intervalo(a, b);
    } else {
        printf("O primeiro número deve ser menor do que o segundo.");
    }

    return 0;
}