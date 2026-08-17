/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	float A, B, C; // não esquecer de mudar o tipo no porcentagem!!!! %f

	printf("Insira o primeiro número: ");
	scanf("%f", &A);
	printf("Insira o segundo número: ");
	scanf("%f", &B);
	printf("Insira o terceiro número: ");
	scanf("%f", &C);


	if (A > B && A > C) { // os dois && são equivalentes ao and no python. || é o or.
		printf("O maior dos três números é %.1f.", A);
	} else if (B > A && B > C) { 
		printf("O maior dos três números é %.1f.", B);
	} else {
		printf("O maior dos três números é %.1f.", C);
	}

	return 0;
}