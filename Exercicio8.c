#include <stdio.h>
#include <conio.h>
/*Fa�a um algoritmo que leia as 3 notas de um aluno e calcule a m�dia final deste aluno.*/
void main(){
	int NOTA1, NOTA2, NOTA3;
	float MEDIA;
	printf("Infome a primeira nota do aluno");
	scanf("%d", &NOTA1);
	printf("Infome a segunda nota do aluno");
	scanf("%d", &NOTA2);
	printf("Informe a terceira nota do aluno");
	scanf("%d", &NOTA3);
	MEDIA = (float)(NOTA1 + NOTA2 + NOTA3) / 3;
	printf("A m�dia informada pelo aluno �:  %f",MEDIA);
}
