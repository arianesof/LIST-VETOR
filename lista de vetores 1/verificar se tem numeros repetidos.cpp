//Fa�a um algoritmo que leia um vetor de at� 80 elementos. Ap�s a leitura de todos os dados, leia 
//um n�mero e verifique se existem elementos no vetor iguais ao n�mero lido. Se existirem, 
//escrever, em uma tela limpa, quantas vezes eles aparecem e quais as posi��es em que eles est�o 
//armazenados no vetor
#include<stdio.h>
int main(void){
	//declara��es
	int i, vet[10], numero, posicao;
	//i=�ndice do vetor
		//leitura e armazenamento dos vetores
		for(i=0;i<10;i++){
			printf("Digite o numero|%i|: ", i+1);
			scanf("%i", &vet[i]);
		}		//compara��o do numero com os valores dos vetores
				printf("\nDigite o numero a ser comparado com os valores do vetor: ");
				scanf("%i", &numero);
				
					//impress�o de resultados
					for(i=0;i<10;i++){
					if(numero==vet[i]){
					printf("\nNumero existente no vetor\n");
					printf("Posicao em que aparece: %i\n", i+1, numero);
					}
						}
					return 0;
					}
