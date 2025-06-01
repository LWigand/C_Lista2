#include<stdio.h>


int main() {

	char sexo;
	
	printf("Entre com a letra F ou M:\n");
	scanf("%c",&sexo);
	
	if(sexo == 'F') {
		printf("Sexo feminino:\n");
	}
	else
	{
		if(sexo == 'f'){
			printf("Sexo feminino:\n");
		}
		else
		{
			if(sexo == 'm'){
				printf("Sexo masculino:\n");
			}
			else
			{
				if(sexo == 'M'){
					printf("Sexo masculino:\n");
				}
				else
				{
					printf("Sexo invalido:\n");
				}	
			}	
		}
	}

return 0;	
}
