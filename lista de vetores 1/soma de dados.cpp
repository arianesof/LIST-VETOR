//Fa�a um algoritmo que calcule e escreva o somat�rio dos valores armazenados numa vari�vel
//composta unidimensional, chamada dados, de at� 100 elementos num�ricos a serem lidos.
#include<stdio.h>
int main(void){
    int elemento, soma=0;
    int i=0;

    do{
        printf("Informe a quantidade de elementos a serem lidos: ");
        scanf("%d", &elemento);
        if (elemento<=100){
            break;
        } else {
            printf("O Valor maximo de elementos e 100, informe outro valor.\n");
        }
    } while (elemento>100);
    int dados[elemento];

    i=0;
    for(i;i<elemento; i++){
        printf("Digite o valor %d: ", i);
        scanf("%d", &dados[i]);
    }

    i=0;
    for (i; i<elemento; i++){
        soma += dados[i];
    }
        printf("O resultado da soma de todos os valores informados e igual a: %d", soma);

    return 0;
}
