#include <stdio.h>
#include <stdint.h>
#include <math.h>

void setLampada(int);
void verLampada();

uint8_t lamp = 0;

int main()
{
	int op;
	
	while(1)
	{
		printf("1 - ligar lampadas\n2 - desligar lampadas\n3 - verificar lampada\n0 - sair\n- ");
		scanf("%d", &op);
		
		if(op == 1 || op == 2)
			setLampada(op);
		else if(op == 3)
			verLampada();
		else if(op == 0)
			break;
		else
			printf("opcao invalida. tente novamente\n");
	}
	
    return 0;
}

void setLampada(int op)
{
	while(1)
	{
		uint8_t l_num;
		
		printf("\ndigite o numero da lampada 1 - 8\n0 - voltar\n- ");
		scanf("%d", &l_num);
		
		if(l_num >= 1 && l_num <= 8)
		{
			if(op == 1)
				lamp |= (uint8_t)pow(2, l_num-1);
			else if(op == 2)
				lamp &= ~((uint8_t)pow(2, l_num-1));
			
			printf("valor: %d\n", lamp);
		}
		else if(l_num == 0)
			break;
		else
			printf("opcao invalida. tente novamente\n");
	}
	
}

void verLampada()
{
	while(1)
	{
		uint8_t l_num;
		
		printf("\ndigite o numero da lampada 1 - 8\n0 - voltar\n- ");
		scanf("%d", &l_num);
		
		if(l_num >= 1 && l_num <= 8)
		{
			printf("\na lampada %d esta ", l_num);
			if(lamp & (uint8_t)pow(2, l_num-1))
				printf("ligada\n");
			else
				printf("desligada\n");
			
			
		}
		else if(l_num == 0)
			break;
		else
			printf("opcao invalida. tente novamente\n");
	}
}