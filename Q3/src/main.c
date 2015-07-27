#include <stdio.h>
#include <stdlib.h>

//03ª QUESTÃO Escreva um programa em C que exiba a soma de todos os números que são múltiplos de 3 e de 7 entre 0 e 1000. (1,0)

int main()
{
	int soma = 0, i;
	
	for(i = 1; i < 1000; i++)
	{
		if(i % 3 == 0)
			soma += i;
		if(i % 7 == 0)
			soma += i;
	}
	
	printf("soma: %d\n", soma);
}
