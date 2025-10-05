#include <stdio.h>
#include <math.h> 

int main() {
    float peso, altura, imc;

    printf("\n--- 1. Cálculo do IMC ---\n");
    printf("Digite o peso em kg (ex: 75.5): ");

    if (scanf("%f", &peso) != 1) return; 

    printf("Digite a altura em metros (ex: 1.75): ");
    if (scanf("%f", &altura) != 1) return;

    if (altura <= 0) {
        printf("Altura inválida.\n");
        return;
    }

    imc = peso / pow(altura, 2);

    printf("Seu IMC é: %.2f\n", imc);
    printf("Classificação: ");

    if (imc < 18.5) {
        printf("Magreza\n");
    } else if (imc <= 24.9) {
        printf("Normal\n");
    } else if (imc <= 29.9) {
        printf("Sobrepeso\n");
    } else if (imc <= 39.9) {
        printf("Obesidade\n");
    } else {
        printf("Obesidade Grave\n");
    }
    return 0;
}