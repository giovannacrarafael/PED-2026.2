#include <stdio.h>
#include <math.h>

/*
CASO BASE -> N < 10, PORQUE A SOMA VAI SER O PRÓPRIO ALGARISMO
EXEMPLO DE N -> 987654

39
9+(30)
9+8+(22)
9+8+7+(15)
9+8+7+(6+9)
9+8+7+6+(5+4) PEGA O ÚLTIMO ALGARISMO E SOMA COM O ANTERIOR

*/

int soma_digitos(int n)
{
    if (n < 10){
        return n;
    }
    return (n % 10) + soma_digitos(n / 10); // O % deixa como resto o último algarismo e o / retira esse último algarismo da sequência para somar o anterior 
}

int main()
{
    int n;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("A soma dos dígitos do valor informado é %d.", soma_digitos(n));

    return 0;
}