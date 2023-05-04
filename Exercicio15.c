#include <stdio.h>
#include <conio.h>
/*Elabore um algoritmo que seja capaz de transformar graus Fahrenheit em Celsius utilizando a formula dada:
	C = ((F – 32) * 5) / 9 */
void main(){
            int FAHREITH;
            float CELSIUS, CEL;
            printf("Informe um numero em graus Fahrenheit, apenas numero");
            scanf("%i", FAHREITH);
            CELSIUS = (FAHREITH - 32) * 5;
            CEL = CELSIUS / 9;
            printf("O valor de Celsius eh! %f", CEL);
            
     }
