#include <stdio.h>
#include <conio.h>
/*Fa�a um algoritmo que ao receber um n�mero qualquer, seja capaz de verificar se o mesmo � ou n�o negativo.*/
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
