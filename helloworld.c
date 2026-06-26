#include<stdio.h>

int main(){
    //entra altura e peso (variaveis)
    float altura;
    float peso;

// entrada de dados
    printf("insira altura\n");
    scanf("%f", &altura);
    printf("insira peso\n");
    scanf("%f", &peso);

    float result = altura * altura / peso;

    printf("%f", result);

    return 0;
}