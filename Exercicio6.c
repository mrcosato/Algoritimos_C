#include<stdio.h>
#include<conio.h>
/*Escreva um algoritmo que leia 3 números e ao final subtraia o primeiro do segundo e divida o 
resultado pelo terceiro*/
void main(){
	int NUM1, NUM2, NUM3, SUB, DIV;
	printf("Digite primeiro numero:");
	scanf("%i", &NUM1);
	printf("Digite segundo numero");
	scanf("%i", &NUM2);
	printf("Digite terceiro numero");
	scanf("%i", &NUM3);
	SUB = NUM1 - NUM2;
	DIV = SUB / NUM3;
	printf("O valor da subtracao do primeiro pelo segundo e a divisão do resultado da subtracao pelo terceiro é: %d", DIV);
}
