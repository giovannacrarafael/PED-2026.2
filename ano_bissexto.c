/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int A; 

	printf("Digite um ano (formato 0000): ");
	scanf("%d", &A);
	
	if (A % 4 == 0 && A % 100 != 0 || A % 400 == 0){
	    printf("O ano inserido é bissexto. ");
	} else {
	    printf("O ano inserido NÃO é bissexto. ");
	}
	

	return 0;
}