#include<stdio.h>

void notasImp(int valor){
    int notas;
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
}

int main(){
    int valor;

    printf("Quanto voce quer sacar(entre 10 e 600)? ");
    scanf("%d",&valor);

    if(valor < 10 || valor > 600){
        while(valor < 10 || valor > 600){
            printf("Valor fora dos limites informe outro: ");
            scanf("%d",&valor);
        }
    }

    notasImp(valor);

    return 0;
}
