#include<stdio.h>


int main() {

	int valor;
	
	printf("Entre com  um valor:\n");
	scanf("%d",&valor);
	
	if(valor < 0)
	{
		printf("Valor negativo:\n");
	}
	else
	{ 
		if(valor > 0)
		{
			printf("Valor positivo:\n");
		}
		else
		{
				printf("Valor nulo:\n");
		}
	}
	
	
	return 0;	
}
