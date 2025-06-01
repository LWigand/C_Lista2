#include<stdio.h>

int main(){
	
	char letra;
	
	printf("Entre com uma letra:\n");
	scanf("%c",&letra);
	
	if((letra=='a')||(letra=='e')||(letra=='i')||(letra=='o')||(letra=='u'))
	{
		printf("A letra e uma vogal:\n");
	}
	else
	{
		printf("A letra e uma consoante:\n");
	}
		
	return 0;
}
