#include <stdio.h>
#include <conio.h>
/*Switch - Faça um algoritmo que receba o preço e o código de origem de um produto e exiba a procedência de acordo com a tabela abaixo:
Código de Origem	Procedência
1			Sul
2			Norte
3			Leste
4			Oeste
5 ou 6			Nordeste
7, 8 ou 9		Sudeste
10 até 20		Centro-Oeste
21 até 30		Noroeste
Outros código		Inválido

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
