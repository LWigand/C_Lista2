#include<stdio.h>


int main() {

	int num1, num2;
	
	printf("Entre com o primero numero:\n");
	scanf("%d",&num1);
	printf("Entre com o segundo numero:\n");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("O primeiro numero e maior:\n");
	}
	else
	{
		if(num2>num1){
		printf("O segundo numero e maior:\n");	
		}
		else
		{
			printf("Os numeros sao iguais:\n");
		}
	}

return 0;	
}
