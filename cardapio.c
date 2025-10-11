#include <stdio.h>

int main(){
    int menu = 0;
    printf("Cardapio");
    printf("Digite o numero do dia referente a semana:");
    scanf("%d", &menu);
        switch (menu) {
        case 1:
            printf("Segundo-feira:\n");
            printf("Picadinho de Carne\n");
            break;
        case 2:
            printf("Terça-feira: \n");
            printf("File de Frango \n");
            break;
        case 3:
            printf("Quarta-feira: \n");
            printf("Fejoada \n");
            break;
        case 4:
            printf("Quinta-feira: \n");
            printf("Virada Paulista \n");
            break;
        case 5:
            printf("Sexta-feira: \n");
            printf("Peixe \n");
            break;
        case 6:
            printf("Sabado:\n");
            printf("Contra File\n");
            break;
        case 7:
            printf("Domingo: \n");
            printf("Pizza \n");
            break;
         default:
            printf("Numero do dia invalido \n");
        }
    return 0;
}