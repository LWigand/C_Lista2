#include<stdio.h>

/*Construa um programa que indique se um numero digitado esta compreendido no intervalo aberto de 0 a 100 (0
e 100 nao estao na faixa de valores).*/

int main(){
	
	int num;
	
	printf("Entre com um numero:\n");
	scanf("%d",&num);
	/*
	Por algum motivo com os valores 0 e 100,eles estavam entrando,
	embora eu não esteja colocando <= ou >=.
	*/
	
	if((num<1)||(num>99))
	{
		printf("O numero nao se encontra dentro do intervalo:\n");
	}
	else
	{
		printf("O numero esta dentro do intervalo:\n");
	}
	
	return 0;
}
