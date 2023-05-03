#include <stdio.h>
#include <conio.h>
/*Faça um algoritmo que leia a idade de uma pessoa e ao final exiba quando meses, dias, horas, minutos e 
segundo que essa pessoa já viveu.*/
void main(){
	int IDADE, MINUTOS, HORAS, DIAS, SEGUNDOS;
	printf("Informe a leia idade: ");
	scanf("%d", &IDADE);
	DIAS = IDADE * 365;
	HORAS = DIAS * 24;
	MINUTOS = HORAS * 60;
	SEGUNDOS = MINUTOS * 60;
	printf("Este individuo tem %d DIAS vividos", DIAS);
	printf(" %d horas que ja viveu", HORAS);
	printf("%d minutos de vida", MINUTOS);
	printf("%d segundos", SEGUNDOS);
}
