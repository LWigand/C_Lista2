#include<stdio.h>

/*Escreva um programa que receba um numero e imprima se o numero e ou nao e multiplo de 3.*/

int main(){
	
	int num;
	
	printf("Entre com um numero:\n");
	scanf("%d",&num);
	
	if(num%3==0){
		printf("O numero e multiplo de 3:\n");
	}
	else
	{
		printf("O numero nao e multiplo de 3:\n");
	}
	
	return 0;
}
