#include <stdio.h>

int main(){
    int operacao = 0;
    float num1 = 0.0;
    float num2 = 0.0;
    float resultado = 0.0;

    printf("Calculadora Simples \n");
    printf("1: Soma, 2: Subtrair, 3: Dividir, 4: Multiplicacoes \n");
    printf("Digite operacao que deseja calcular: \n");
    scanf("%d", &operacao);

    printf("Digite primeiro numero: \n");
    scanf("%f", &num1);

    printf("Digite segundo numero: \n");
    scanf("%f", &num2);

        switch (operacao) {
        case 1:
            printf("Soma: \n");
            printf("resultado: %.2f \n", num1 + num2);
            break;
        case 2:
            printf("Subtrair: \n");
            printf("resultado: %.2f \n", num1 - num2);
            break;
        case 3:
            printf("Dividir: \n");
            printf("resultado: %.2f \n", num1 / num2);
            break;
        case 4:
            printf("Multiplicacoes: \n");
            if (num1 == 0 || num2 == 0) {
                printf("Multiplicacao por zero nao e permitida.\n");
                break;
            }
            printf("resultado: %.2f \n", num1 * num2);
            break;
         default:
            printf("Numero do dia invalido \n");
        }
    return 0;
}