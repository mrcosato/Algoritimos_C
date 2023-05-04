#include <stdio.h>
#include <conio.h>
/*Switch - Faça um algoritmo que leia um número de 0 até 10 e o exiba por extenso, caso o número seja diferente do intervalo, exibir uma mensagem de erro.
Numero		Por extenso
1			Um
2			Dois
3			Três
4			Quatro
...
10			Dez
Outros número	Inválido

*/
void main(){
     int TEMNUM;
     printf("Dite uma tecla numerica que vai de 0 ate 10 e veja por extenso");
     scahf("%i",TEMNUM);
     if(TEMNUM >=0 && TEMNUM <-10){
          if (TEMNUM = 0 ) {
             printf("ZERO");
             }
          if (TEMNUM == 1 ) {
             printf("UM");
             }
          if (TEMNUM == 2 ) {
             printf("DOIS");
             }
          if (TEMNUM == 3 ) {
             printf("TRES");
             }
          if (TEMNUM == 4 ) {
             printf("QUATRO");
             }
          if (TEMNUM == 5 ) {
             printf("CINCO");
             }
          if (TEMNUM == 6 ) {
             printf("SEIS");
             }
          if (TEMNUM == 7 ) {
             printf("SETE");
             }
          if (TEMNUM == 8 ) {
             printf("OITO");
             }
          if (TEMNUM == 9 ) {
             printf("NOVE");
             }
          if (TEMNUM == 10 ) {
             printf("DEZ");
             }
          }
          else printf("Erro, numero invalido");   
     }
