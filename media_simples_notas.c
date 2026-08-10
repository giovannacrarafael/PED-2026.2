/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("MÉDIA ARITMÉTICA SIMPLES DE NOTAS\n");
    printf("Digite a primeira nota: "); 
    float nota1, nota2, nota3; //declarar as variáveis primeiro
    scanf("%f", &nota1); //lê os dados de input
    printf("Digite a segunda nota: ");
    fflush(stdin); //limpa a memória
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    fflush(stdin); //limpa a memória
    scanf("%f", &nota3);
    printf("A média aritmética simples das notas digitadas é %.0f.", (nota1 + nota2 + nota3) / 3.0); //tudo tem que ter ponto flutuante no float

    return 0;
}