#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero;
	printf("Digite um n�mero:\n");
	scanf("%d",&numero);
	if(numero!= 0){
}
		if(numero>0){
			printf("N�mero positivo!");
		}else{
		printf("N�mero negativo!");
	}
}
