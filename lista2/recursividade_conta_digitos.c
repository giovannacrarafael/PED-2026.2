#include <stdio.h>
#include <math.h>

/*
CASO BASE -> N < 10, JÁ QUE 0 ATÉ 9 SÓ TEM UM ALGARISMO 
EXEMPLO DE N -> 123456

1 
12 / 10
123 / 10
1234 / 10
12345 / 10
123456 / 10 ANDA COM A CASA DA VÍRGULA

*/

int conta_digitos(int n)
{
    if (n < 10){
        return 1;
    }
    return 1 + conta_digitos(n / 10); 
}

int main()
{
    int n;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("O número de dígitos do valor informado é %d.", conta_digitos(n));

    return 0;
}