#include<stdio.h>
#include<conio.h>
/*Escreva um algoritmo que leia seu nome e em uma segunda 
variável leia seu sobrenome e ao final exiba seu nome 
concatenado com seu sobrenome.*/
void main(){
	char nome [40];
	char sobrenome[40];
	printf("Digite seu nome: ");
	scanf("%s",nome);
	printf("Digite seu sobrenome: ");
	scanf("%s",sobrenome);
	printf("O nome e sobrenome informados no programa e: %s %s",nome,sobrenome);	
}
