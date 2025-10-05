#include <stdio.h>

int main() {
    float nota;
    printf("\n--- 3. Verificar se o aluno foi aprovado ---\n");
    printf("Digite a nota do aluno: ");
    if (scanf("%f", &nota) != 1) return; 

    if (nota >= 7.0) {
        printf("Aluno APROVADO!\n");
    } else {
        printf("Aluno REPROVADO.\n");
    }

    return 0;
}