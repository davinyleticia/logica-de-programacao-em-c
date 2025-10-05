#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float nota;
	printf("Digite a nota do aluno:\n");
	scanf("%f",&nota);
	if(nota> 9){
		printf("Excelente!\n");
	}else if(nota >= 7){
		printf("Bom! \n");
	}else if(nota >= 5){
		printf("Regular! \n");
	}else{
		printf("Insuficiente! \n");
	}
}
