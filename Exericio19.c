#include <stdio.h>
#include <conio.h>
/*Switch - Uma Companhia de Seguros possui nove categorias de 
seguro baseadas na idade e ocupa��o do segurado. Somente pessoas com 
pelo menos 17 anos e n�o mais de 70 anos podem adquirir ap�lices de 
seguro. Quanto �s classes de ocupa��es, foram definidos tr�s grupos de
risco. A tabela abaixo fornece as categorias em fun��o da faixa et�ria e
 do grupo de risco. Dados nome, idade e grupo de risco, determinar a 
 categoria do pretendente � aquisi��o de tal seguro. Imprimir o nome a 
 idade e a categoria do pretendente, e, caso a idade n�o esteja na faixa
  necess�ria, imprimir uma mensagem. */


void main(){
     int IDADE, RISCO;
     printf("Informe a idade: ");
     scanf("%i", &IDADE);
     if(IDADE > 16 || IDADE < 21){
          printf("Infome o Grau de risco desejado opcoes - (1) ou (2) ou (3)");
          scanf("%i", RISCO);
          if (RISCO == 1 ){
                    printf("GRAU BAIXO");
                    }
          if (RISCO == 2 ){
                    printf("GRAU DE RISCO BAIXO");
                    }
          if (RISCO == 3 ){
                    printf("GRAU ALTO");
                    }
          }
          if(IDADE > 20 || IDADE < 25){
          printf("Infome o Grau de risco desejado opcoes - (1) ou (2) ou (3)");
          scanf("%i", RISCO);
          if (RISCO == 1 ){
                    printf("GRAU BAIXO");
                    }
          if (RISCO == 2 ){
                    printf("GRAU DE RISCO BAIXO");
                    }
          if (RISCO == 3 ){
                    printf("GRAU ALTO");
                    }
          }
          if(IDADE > 24 || IDADE < 35){
          printf("Infome o Grau de risco desejado opcoes - (1) ou (2) ou (3)");
          scanf("%i", RISCO);
          if (RISCO == 1 ){
                    printf("GRAU BAIXO");
                    }
          if (RISCO == 2 ){
                    printf("GRAU DE RISCO BAIXO");
                    }
          if (RISCO == 3 ){
                    printf("GRAU ALTO");
                    }
          }
          if(IDADE > 34 || IDADE < 65){
          printf("Infome o Grau de risco desejado opcoes - (1) ou (2) ou (3)");
          scanf("%i", RISCO);
          if (RISCO == 1 ){
                    printf("GRAU BAIXO");
                    }
          if (RISCO == 2 ){
                    printf("GRAU DE RISCO BAIXO");
                    }
          if (RISCO == 3 ){
                    printf("GRAU ALTO");
                    }
          }
          if(IDADE > 64 || IDADE < 71){
          printf("Infome o Grau de risco desejado opcoes - (1) ou (2) ou (3)");
          scanf("%i", RISCO);
          if (RISCO == 1 ){
                    printf("GRAU BAIXO");
                    }
          if (RISCO == 2 ){
                    printf("GRAU DE RISCO BAIXO");
                    }
          if (RISCO == 3 ){
                    printf("GRAU ALTO");
                    }
          } else printf("Idade indefinida ou n�o atigiu requisitos minimos de idade");
     }
