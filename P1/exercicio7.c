#include <stdio.h>

int main() {
    int numero;
    printf("\n--- 7. Verificar se é múltiplo de 3 e 5 ---\n");
    printf("Digite um número inteiro: ");
    if (scanf("%d", &numero) != 1) return; 

    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("O número %d é múltiplo de 3 E de 5 ao mesmo tempo.\n", numero);
    } else {
        printf("O número %d NÃO é múltiplo de 3 e 5 ao mesmo tempo.\n", numero);
    }

    return 0;
}