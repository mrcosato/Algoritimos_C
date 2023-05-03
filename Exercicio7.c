#include <stdio.h>
#include <conio.h>
/*Escreva um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, ao final exiba a idade que
 essa pessoa tem.*/
void main (){
	int ANO, ANOATUAL, RESULIDADE;
	printf("Infome o ano que estamos: ");
	scanf("%d",&ANOATUAL);
	printf("Informe o nascimento: ");
	scanf("%d",&ANO);
	RESULIDADE = ANOATUAL - ANO;
	printf("Idade que essa pessoa tem: %d", RESULIDADE);
}
