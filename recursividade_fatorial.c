#include <stdio.h>
#include <math.h>

/*
CASO BASE -> N == 0 OU N == 1
EXEMPLO DE N -> 5

fatorial(5)
= 5 * fatorial(4)
= 5 * 4 * fatorial(3)
= 5 * 4 * 3 * fatorial(2)
= 5 * 4 * 3 * 2 * fatorial(1)
= 5 * 4 * 3 * 2 * 1
= 120

*/

int fatorial(int n)
{
    if (n == 0 || n == 1){
        return 1;
    }
    return n * fatorial(n - 1);
}

int main()
{
    int n;
    
    printf("Digite um número inteiro a partir de 0 (zero): ");
    scanf("%d", &n);

    printf("O fatorial do número %d é %d.", n, fatorial(n));

    return 0;
}