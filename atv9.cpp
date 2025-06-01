#include<stdio.h>

/*
Mercurio 0,37:Venus 0,88;Marte 0,38;Jupiter 2,64;Saturno 1,15;Urano 1,17:
*/

int main(){
	
	float peso,peso2;
	int planeta;
	
	printf("Informe o planeta desejado:\n");
	printf("Mercurio=1,Venus=2,Marte=3,Jupiter=4,Saturno=5,Urano=6:\n");
	scanf("%d",&planeta);
	printf("Informe o seu peso:\n");
	scanf("%f",&peso);
	
	if(planeta==1)
	{
		peso2 = peso * 0.37;
		printf("Seu peso em Mercurio:%f",peso2);
	}
	else
	{
		if(planeta==2)
		{
			peso2 = peso * 0.88;
			printf("Seu peso em Venus:%f",peso2);
		}
		else
		{
			if(planeta==3)
			{
				peso2 = peso * 0.38;
				printf("Seu peso em Marte:%f",peso2);
			}
			else
			{
				if(planeta==4)
				{
					peso2 = peso * 2.64;
					printf("Seu peso em Jupiter:%f",peso2);
				}
				else
				{
					if(planeta==5)
					{
						peso2 = peso * 1.15;
						printf("Seu peso em Saturno:%f",peso2);
					}
					else
					{
						if(planeta==6)
						{
							peso2 = peso * 1.17;
							printf("Seu peso em Urano:%f",peso2);
						}
						else
						{
							printf("Numero Invalido:\n");
						}
					}
				}
			}
		}
	}
	return 0;
}
