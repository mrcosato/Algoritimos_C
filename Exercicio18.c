#include <stdio.h>
#include <conio.h>
/*Switch - Faça um algoritmo que receba a idade de uma pessoa e 
classifique-a seguindo a tabela abaixo:*/
void main(){
     int IDADE;
     printf("Insira uma idade e receba a classificação da idade");
     scanf("%i", &IDADE);
     if (IDADE >= 0 || IDADE < 3){
           printf("Esta idade tem classificação Recehm-Nascido");
           }
     if (IDADE > 2 || IDADE < 12){
           printf("Esta idade tem classificação Criança");
           }
           if (IDADE > 11 || IDADE < 19){
           printf("Esta idade tem classificação Adolescente");
           }
           if (IDADE > 19 || IDADE < 56){
           printf("Esta idade tem classificação Adulto");
           }
           if (IDADE >54){
           printf("Esta idade tem classificação Idoso");
           }
                 
     }
