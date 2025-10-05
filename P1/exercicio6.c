#include <stdio.h>

int main() {
    int idade;
    printf("\n--- 6. Classificar idade ---\n");
    printf("Digite a idade da pessoa: ");
    if (scanf("%d", &idade) != 1) return; 

    if (idade < 0) {
        printf("Idade inválida.\n");
    } else if (idade <= 12) {
        printf("Classificação: Criança\n");
    } else if (idade <= 17) {
        printf("Classificação: Adolescente\n");
    } else if (idade <= 59) { 
        printf("Classificação: Adulto\n");
    } else { 
        printf("Classificação: Idoso\n");
    }

    return 0;
}