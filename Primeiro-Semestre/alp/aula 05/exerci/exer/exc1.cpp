#include <stdio.h>
//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

int main () {

    int n1, n2, n3, n4, soma;
    printf("Programe para somar 4 numeros\n");
    printf("Digite o valor de n1\n");
    scanf("%d%*c",&n1);
    printf("Digite o valor de n2\n");
    scanf("%d%*c",&n2);
    printf("Digite o valor de n3\n");
    scanf("%d%*c",&n3);
    printf("Digite o valor de n4\n");
    scanf("%d%*c",&n4);
    soma=n1+n2+n3+n4;
    printf("O resultado da soma e: %d", soma);
    
}

    
