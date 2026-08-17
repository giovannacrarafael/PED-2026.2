/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int A; 

	printf("Insira um valor de 1 a 12: ");
	scanf("%d", &A);
	
	switch(A) { // O SWITCH SERVE PARA COMPARAR VALORES EXATOS, IDEAL PARA MESES DO ANO
	    case 1: // O case seleciona o número que foi inserido como opção. Substitui IF/ELSE.
	        printf("O número inserido corresponde ao mês de JANEIRO.");
	        break;
	    case 2:
	        printf("O número inserido corresponde ao mês de FEVEREIRO.");
	        break;
	    case 3:
	        printf("O número inserido corresponde ao mês de MARÇO.");
	        break;
	    case 4:
	        printf("O número inserido corresponde ao mês de ABRIL.");
	        break;
	    case 5:
	        printf("O número inserido corresponde ao mês de MAIO.");
	        break;
	    case 6:
	        printf("O número inserido corresponde ao mês de JUNHO.");
	        break;
	    case 7:
	        printf("O número inserido corresponde ao mês de JULHO.");
	        break;
	    case 8:
	        printf("O número inserido corresponde ao mês de AGOSTO.");
	        break;
	    case 9:
	        printf("O número inserido corresponde ao mês de SETEMBRO.");
	        break;
	    case 10:
	        printf("O número inserido corresponde ao mês de OUTUBRO.");
	        break;
	    case 11:
	        printf("O número inserido corresponde ao mês de NOVEMBRO.");
	        break;
	    case 12:
	        printf("O número inserido corresponde ao mês de DEZEMBRO.");
	        break;
	    default: //como se fosse o else depois que todas as opções foram esgotadas
	        printf("O número inserido não é válido.");
	        break;
	}

	return 0;
}