#include <stdio.h>

int main() {
    const int LIMITE_MAXIMO = 100;
    int temperatura;

    printf("Digite a temperatura atual: ");
    scanf("%d", &temperatura);

    if (temperatura > LIMITE_MAXIMO) {
        printf("ALERTA! A temperatura ultrapassou o limite de %d graus.\n", LIMITE_MAXIMO);
    } else {
        printf("Temperatura dentro do limite permitido.\n");
    }

    return 0;
}
