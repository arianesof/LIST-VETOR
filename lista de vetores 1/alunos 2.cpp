//Altere o algoritmo anterior considerando que n�o se conhece quantos alunos esta turma tem
//(menos que 50). O n�mero de aluno ser� informado pelo usu�rio.
#include <stdio.h>
int main(void){
	int numeroAlunos;
	printf("Informe a quantidade de alunos: ");
	scanf("%d", &numeroAlunos);//10
	double notas[numeroAlunos];//notas[10]
	int i;
	
	for(i=0;i<numeroAlunos;i++){
		printf("Digite a nota: ");
		scanf("%lf", &notas[i]);
		
	}
	
	for(i=0;i<numeroAlunos;i++){
		printf("nota: %.1lf\n", notas[i]);		
	}
	
return 0;	
}
