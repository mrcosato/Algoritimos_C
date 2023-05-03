#include <stdio.h>
#include <conio.h>
/*Faça um algoritmo que ao receber um número qualquer, seja capaz de verificar se o mesmo é ou não negativo.*/
void main (){
	int NUMERO;
	printf("Recebe numero: ");
	scanf("%i", &NUMERO);
	if (NUMERO<0){
		printf("Numero negativo");
	}
	else
	if (NUMERO>=0){
		printf("Numero positivo");
	}
}
