#include<stdio.h>

int main(){
    int valor,notas;

    printf("Quanto voce quer sacar? ");
    scanf("%d",&valor);

    if(valor > 100){
        notas = valor / 100;
        printf("Notas de 100: %d\n",notas);
    }
    valor = valor % 100;
    if(valor > 50){
        notas = valor / 50;
        printf("Notas de 50: %d\n",notas);
    }
    valor = valor % 50;
    if(valor > 10){
        notas = valor / 10;
        printf("Notas de 10: %d\n",notas);
    }
    valor = valor % 10;
    if(valor > 5){
        notas = valor / 5;
        printf("Notas de 5: %d\n",notas);
    }
    valor = valor % 5;
    if(valor > 1){
        notas = valor / 1;
        printf("Notas de 1: %d\n",notas);
    }
    valor = valor % 1;
    return 0;
}
