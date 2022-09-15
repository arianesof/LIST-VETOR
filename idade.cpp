#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>
int main(){
	int idade,nome,calculaano,ano,exibe;
	char mome [30];
	setlocale(LC_ALL,"portuguese");
	system("cls");
	printf("Digite idade: ");
	scanf ("%d",&idade);
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	ano = 2021-idade, calculaano;
	printf("Ola, %s, você tem %d anos, portanto, você nasceu no ano: %d", nome,idade,ano);
	system("paus>>NULL");
	return 0;
	
	
	
	
}
