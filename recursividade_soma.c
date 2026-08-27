#include <stdio.h>
#include <math.h>

/*
CASO BASE -> N ==1 
EXEMPLO DE N -> 3

1 + 2 + 3 = 6 

1 -> BASE / LINHA DO N(2) - 1
1 + 2 -> LINHA DO N(3) - 1 
1 + 2 + 3

*/

int somatorio(int n)
{
    if (n == 1){
        return n;
    }
    return n + somatorio(n - 1); // 3 + O SOMATÓRIO DE 2
}

int main()
{
    int n;
    
    printf("Digite um número inteiro a partir de 1: ");
    scanf("%d", &n);

    printf("A soma dos números do intervalo entre 1 e %d é %d.", n, somatorio(n));

    return 0;
}