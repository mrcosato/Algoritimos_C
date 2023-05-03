#include <stdio.h>
#include <conio.h>
/*- Elabore um algoritmo que informe o maior número entre dois números conhecido pelo usuário.*/
void main(){
	float NUMERO1, NUMERO2 , MAIOR;
	printf("Digite o primeiro numero: ");
	scanf("%d", &NUMERO1);
	printf("Digite o segundo numero: ");
	scanf("%d", &NUMERO2);
	if (NUMERO1 > NUMERO2){
	MAIOR = NUMERO1;
	printf("O numero %fs e maior", MAIOR);
	}
	if(NUMERO1 == NUMERO2){
		printf("Os numeros sao iguais");
	}
	else{
		MAIOR = NUMERO2;
		printf("O Segundo numero e maior");
	}
	
	
}
