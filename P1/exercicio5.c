#include <stdio.h>

int main() {
    float numero;
    printf("\n--- 5. Verificar se um número está entre 0 e 100 ---\n");
    printf("Digite um número: ");
    if (scanf("%f", &numero) != 1) return; 

    if (numero >= 0 && numero <= 100) {
        printf("O número %.2f está no intervalo de 0 a 100.\n", numero);
    } else {
        printf("O número %.2f está FORA do intervalo de 0 a 100.\n", numero);
    }

    return 0;
}