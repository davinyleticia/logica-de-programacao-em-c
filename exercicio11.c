#include <stdio.h>

int main(){
    int dia = 0;
    printf("Digite o numero do dia referente a semana:");
    scanf("%d", &dia);
        if(dia == 1){
            printf("Nome do dia: segundo-feira \n");
        }else if (dia == 2){
            printf("Nome do dia: terça-feira \n");
        }else if(dia == 3){
            printf("Nome do dia: quarta-feira \n");
        }else if(dia == 4){
            printf("Nome do dia: quinta-feira \n");
        }else if(dia == 5){
            printf("Nome do dia: sexta-feira \n");
        }else if(dia == 6){
            printf("Nome do dia: sabado \n");
        }else if(dia == 7){
            printf("Nome do dia: domingo \n");
        }else{
            printf("Numero do dia invalido \n");
        }
    return 0;
}