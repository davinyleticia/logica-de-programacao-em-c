#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int numero;
    printf("\n--- 2. Verificar se um número é par ou ímpar ---\n");
    printf("Digite um número inteiro: ");
    
    if (scanf("%d", &numero) != 1) return; 

    if (numero % 2 == 0) {
        printf("O número %d é PAR.\n", numero);
    } else {
        printf("O número %d é ÍMPAR.\n", numero);
    }

    return 0;
}