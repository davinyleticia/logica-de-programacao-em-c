#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero;
	printf("Digite um número:\n");
	scanf("%d",&numero);
	printf("Número antes do incremento %d \n" , numero);
	numero++;
	printf("Número depois do incremento %d \n", numero);
}

