#include <stdio.h>
#include <conio.h>
/*- Elabore um algoritmo que informe o maior numero entre três números conhecido pelo usuário. 
(Considere número iguais).*/
void main(){
	int NUM1, NUM2, NUM3;
	printf("NUMERO 1 : ");
	scanf("%i", &NUM1);
	printf("NUMERO 2: ");
	scanf("%i", &NUM2);
	printf("NUMERO 3: ");
	scanf("%i", &NUM3);
	if(NUM1>NUM2 && NUM1>NUM3 ){
		
			printf("NUMERO 1 EH MAIOR");
	}
	else 
		if(NUM2>NUM3 && NUM2 > NUM1){
			printf("NUMERO 2 EH MAIOR");
		}
		else
			if(NUM3>NUM2 && NUM3 > NUM1){
				printf("NUMERO 3 EH MAIOR");
			}
			else{
				printf("NUMEROS IGUAIS");
			}
}
	
