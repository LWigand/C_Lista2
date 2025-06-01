#include<stdio.h>

/*
Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias: infantil A
= 5-7 anos; infantil B = 8-10 anos; juvenil A = 11-13 anos; juvenil B = 14-17 anos; adulto = maiores de 18 anos.
*/

int main(){
	
	int idade;
	
	printf("Entre com a idade do nadador:\n");
	scanf("%d",&idade);
	
	if((idade>=5)&&(idade<=7)){
		printf("Infantil A:\n");
	}
	else{
		if((idade>=8)&&(idade<=10)){
			printf("Infantil B:\n");
		}
		else{
			if((idade>=11)&&(idade<=13)){
				printf("Juvenil A:\n");
			}
			else{
				if((idade>=14)&&(idade<=17)){
					printf("Juvenil B:\n");
				}
				else{
						if(idade>=18)
						{
							printf("Adulto:\n");
						}
						else
						{
							printf("Idade Invalida:\n");
						}
					}
				}
			}
		}
		return 0;
	}

