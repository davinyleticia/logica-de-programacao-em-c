#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num1, num2, soma;
    printf("\n--- 8. Soma de dois números ---\n");
    printf("Digite o primeiro número inteiro: ");
    if (scanf("%d", &num1) != 1) return; 

    printf("Digite o segundo número inteiro: ");
    if (scanf("%d", &num2) != 1) return; 

    soma = num1 + num2;

    printf("A soma de %d e %d é: %d\n", num1, num2, soma);

    return 0;
}