#include <stdio.h>
#include <conio.h>
/*S�o informados dois valores num�ricos correspondentes as notas de um determinado aluno. 
Deseja-se um algoritmo que permita responder "aprovado" se o aluno obtiver m�dia aritm�tica simples
 igual ou superior a 7,0 caso contr�rio "Reprovado". Mostre tamb�m a m�dia de aprova��o do aluno.*/
void main (){
 	int NUMERO1, NUMERO2;
 	float MEDIA;
 	printf("Nota1: ");
 	scanf("%i", &NUMERO1);
 	printf("Nota2: ");
 	scanf("%i", &NUMERO2);
 	MEDIA = (float)(NUMERO1 + NUMERO2) / 2;
	 if (MEDIA >= 7){
 		printf("APROVADO");
 		printf("Mehdia aluno: %f ", MEDIA);
	 }
	 else{
	 	printf("REPROVADO");
	 	printf("Mehdia aluno: %f", MEDIA);
	 }
	
}
