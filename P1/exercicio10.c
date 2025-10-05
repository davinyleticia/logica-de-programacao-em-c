#include <stdio.h>

int main() {
    float nota;
    printf("\n--- 10. Classificação de notas ---\n");
    printf("Digite a nota do aluno (0 a 10): ");
    if (scanf("%f", &nota) != 1) return; 

    if (nota < 0 || nota > 10) {
        printf("Classificação: Nota fora do intervalo válido (0 a 10)\n");
    } else if (nota >= 9.0) {
        printf("Classificação: Excelente\n");
    } else if (nota >= 7.0) { // Já sabemos que é < 9.0
        printf("Classificação: Bom\n");
    } else if (nota >= 5.0) { // Já sabemos que é < 7.0
        printf("Classificação: Regular\n");
    } else { // nota < 5.0
        printf("Classificação: Insuficiente\n");
    }

    return 0;
}