#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero;
	printf("Digite um n�mero:\n");
	scanf("%d",&numero);
	printf("N�mero antes do incremento %d \n" , numero);
	numero++;
	printf("N�mero depois do incremento %d \n", numero);
}

