#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero;
	printf("Digite um número:\n");
	scanf("%d",&numero);
	if(numero!= 0){
}
		if(numero>0){
			printf("Número positivo!");
		}else{
		printf("Número negativo!");
	}
}
