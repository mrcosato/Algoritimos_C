#include <stdio.h>
#include<conio.h>
//Escreva um algoritmo que leia 4 números, após a leitura multiplique todos e exibir o resultado
void main(){
	int num, num2, num3,num4,mult;
	printf("Informe o primeiro numero: ");
	scanf("%i", &num);
	printf("Informe segundo numero: ");
	scanf("%i", &num2);
	printf("Informe o terceiro numero: ");
	scanf("%i", &num3);
	printf("Informe o quarto numero: ");
	scanf("%i", &num4);
	mult = num * num2 * num3 * num4;
	printf("A multiplicação dos valores lidos é:%i", mult);
}
