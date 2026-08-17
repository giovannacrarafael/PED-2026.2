/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int A; 

	printf("Insira sua idade: ");
	scanf("%d", &A);

	if (A <= 11){
	    printf("Você é uma criança. ");
	} else if (12 <= A && A <=17){ // não pode fazer comparação encadeada como no python, tem que ser separado.
	    printf("Você é um adolescente. ");
	} else if (18 <= A && A <= 59){
	    printf("Você é um adulto. ");
	} else {
	    printf("Você é um idoso. ");
	}

	return 0;
}