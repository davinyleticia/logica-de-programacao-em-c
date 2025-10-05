#include <stdio.h>
#include<locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float num1, num2;
    printf("\n--- 4. Maior entre dois números ---\n");
    printf("Digite o primeiro número: ");
    if (scanf("%f", &num1) != 1) return; 

    printf("Digite o segundo número: ");
    if (scanf("%f", &num2) != 1) return; 

    if (num1 > num2) {
        printf("O MAIOR número é: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("O MAIOR número é: %.2f\n", num2);
    } else {
        printf("Os números são IGUAIS.\n");
    }
}