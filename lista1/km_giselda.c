/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>


int main()
{
    int pessoas_conta;
    float km_pretendido, valor_combustivel, km_por_litro, total_litros, total_gasto, contribuicao;
    
    printf("        *** 'RACHANDO' O COMBUSTÍVEL DA VIAGEM ***\n\n");
    printf("Quilometragem por litro de combustível: ");
    scanf("%f", &km_por_litro);
    printf("Quilometragem da viagem: ");
    scanf("%f", &km_pretendido);
    printf("Valor do litro do combustível: ");
    scanf("%f", &valor_combustivel);
    printf("Quantidade de pessoas para dividir a conta: ");
    scanf("%d", &pessoas_conta);
    
    total_litros = km_pretendido / km_por_litro;
    total_gasto = total_litros * valor_combustivel;
    contribuicao = total_gasto / pessoas_conta;
   
    printf("Para uma viagem de %.0f quilômetros, seu automóvel consumirá %.0f litros de combustível, o que gera um gasto de %.2f com o abastecimento. Então, cada viajante (total de %d pessoas) contribuirá com R$%.2f.", km_pretendido, total_litros, total_gasto, pessoas_conta, contribuicao); 

    return 0;
}
