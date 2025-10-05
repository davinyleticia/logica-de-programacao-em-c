#include <stdio.h>
int main() {
	int nota;
	
	printf("Digite a nota do aluno: ");
	scanf("%d", &nota);
	
	if(nota >= 60) {
		printf("Aluno aprovado.\n");
	}else{
		printf("Aluno reprovado.\n");
	}
	return 0;
} 
