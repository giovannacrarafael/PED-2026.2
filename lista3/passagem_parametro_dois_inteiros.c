#include <stdio.h>
#include <stdlib.h>

void dois_inteiros(int *a, int *b){
    if (*a >= *b){
        printf("%d, %d", *a, *b);
    } else {
        printf("%d, %d", *b, *a);
    }
}

int main()
{
    int a, b;

    printf("Escolha um número inteiro: ");
    scanf("%d", &a);
    printf("Escolha outro número inteiro: ");
    scanf("%d", &b);

    dois_inteiros(&a, &b);

    return 0;
}
