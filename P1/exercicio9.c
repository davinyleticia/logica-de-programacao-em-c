#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float numero;
    printf("\n--- 9. Verificar se um número é maior que 100 ---\n");
    printf("Digite um número: ");
    if (scanf("%f", &numero) != 1) return; 

    if (numero > 100.0) {
        printf("O número %.2f é MAIOR que 100.\n", numero);
    } else if (numero < 100.0) {
        printf("O número %.2f é MENOR que 100.\n", numero);
    } else {
        printf("O número é EXATAMENTE 100.\n");
    }

    return 0;
}