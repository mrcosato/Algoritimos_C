#include <stdio.h>
#include <conio.h>
/*Construa um algoritmo para calcular a média de dois valores inteiros positivos, previamente conhecidos.*/
void main(){
	int VALOR1, VALOR2;
	float media;
	printf("Valor1: ");
	scanf("%i", &VALOR1);
	printf("Valor2: ");
	scanf("%i", &VALOR2);
	if (VALOR1 && VALOR2 >= 0){
		
		printf("Os valores sao inteiros positivos");
		media = (float)(VALOR1 + VALOR2) / 2;
		printf("Valor media %f", media);
	}
	else{
		printf("Os valores nao sao inteiros positivos, logo nao sao divisiveis");
	}
}
