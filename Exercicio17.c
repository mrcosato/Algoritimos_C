#include <stdio.h>
#include <conio.h>
/*Switch - Fa�a um algoritmo que receba o pre�o e o c�digo de origem de um produto e exiba a proced�ncia de acordo com a tabela abaixo:
C�digo de Origem	Proced�ncia
1			Sul
2			Norte
3			Leste
4			Oeste
5 ou 6			Nordeste
7, 8 ou 9		Sudeste
10 at� 20		Centro-Oeste
21 at� 30		Noroeste
Outros c�digo		Inv�lido

*/
 void main() {
     double PRECO;
     float ORIGEMPROD;
     printf("Informe o codigo: ");
     scanf("%d",&PRECO);
     if (PRECO == 1){
        ORIGEMPROD = "SUL";
        printf("O CODIGO %d", PRECO , "TEM PROCEDENCIA NOME %f", ORIGEMPRED);
           }
     if (PRECO == 2){
        ORIGEMPROD = "norte";
        printf("O CODIGO %d", PRECO , "TEM PROCEDENCIA NOME %f", ORIGEMPRED);
           }
     if (PRECO == 3){
        ORIGEMPROD = "leste";
        printf("O CODIGO %d", PRECO , "TEM PROCEDENCIA NOME %f", ORIGEMPRED);
           }
     if (PRECO == 4){
        ORIGEMPROD = "oeste";
        printf("O CODIGO %d", PRECO , "TEM PROCEDENCIA NOME %f", ORIGEMPRED);
           }
     if (PRECO == 5 || PRECO == 6){
        ORIGEMPROD = "NORDESTE";
        printf("O CODIGO %d", PRECO , "TEM PROCEDENCIA NOME %f", ORIGEMPRED);
           }
     if (PRECO ==7 || PRECO == 8 ||PRECO == 9 ){
        ORIGEMPROD = "SUDESTE";
        printf("O CODIGO %d", PRECO , "TEM PROCEDENCIA NOME %f", ORIGEMPRED);
           }
     if (PRECO >=10 || PRECO <= 20){
        ORIGEMPROD = "CENTRO OESTE";
        printf("O CODIGO %d", PRECO , "TEM PROCEDENCIA NOME %f", ORIGEMPRED);
           }
     if (PRECO >2O && PRECO < 30){
        ORIGEMPROD = "noroeste";
        printf("O CODIGO %d", PRECO , "TEM PROCEDENCIA NOME %f", ORIGEMPRED);
           }
           else printf("invahlido");      
     }
