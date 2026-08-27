#include <stdio.h>
#include <math.h>

/*
CASO BASE -> N == 1 
EXEMPLO DE N -> 6

n = 1: 1
n = 2: [1] * 3 PEGA SÓ A PRIMEIRA POSIÇÃO -> n(2) - 1
n = 3: [1 * 3] * 3 PEGA A PRIMEIRA E A SEGUNDA POSIÇÕES -> n(3) - 1
n = 4: [1 * 3 * 3] * 3 PEGA DA PRIMEIRA À TERCEIRA POSIÇÃO -> n(4) - 1
n = 5: [1 * 3 * 3 * 3] * 3 PEGA DA PRIMEIRA À QUARTA POSIÇÃO -> n(5) - 1
n = 6: [1 * 3 * 3 * 3 * 3] * 3 PEGA DA PRIMEIRA À QUINTA POSIÇÃO -> n(6) - 1
*/

long long int Nesimo(long long int n) // como a curva é exponencial, tem que ser o int longo pra 64bits
{
    if (n == 1){
        return 1;
    }
    return Nesimo(n - 1) * 3;
}

long long int main()
{
    long long int n;
    
    printf("Digite um número inteiro a partir de 1 (um): ");
    scanf("%lld", &n);

    printf("O n-ésimo valor da sequência é %lld.", Nesimo(n));

    return 0;
}