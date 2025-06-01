#include<stdio.h>

/* A prefeitura de Campos abriu uma linha de credito para os funcionarios estatutarios. O valor maximo da
prestacao nao podera ultrapassar 30% do salario bruto. Fazer um programa que permita entrar com o sal´ario
bruto e o valor da prestacao, e informar se o emprestimo pode ou nao ser concedido.
*/

int main(){
	
	float salario,presta,t;
	
	printf("Informe o seu salario:\n");
	scanf("%f",&salario);
	printf("Informe o valor da prestacao:\n");
	scanf("%f",&presta);
	
	t = (salario * 0.3);
	
	if(t>presta){
		printf("O emprestimo pode ser concedido!:\n");
	}
	else
	{
		printf("O emprestimo nao podera ser concedido!:\n");
	}
	
	return 0;
}
