#include <stdio.h>
//Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre
//o valor do aumento e o novo salário.

int main(){
    int sal, perc, aumento, soma;
    printf("Programar para saber o novo salario\n");
    printf("Digite o sal\n");
    scanf("%d%*c",&sal);
    printf("Digite o valor de perc\n");
    scanf("%d%*c",&perc);
    printf("Digte o aumento\n");
    scanf("%d%*c",&aumento);
    soma=sal+perc+aumento;
    printf("Valor novo salario e: %d",soma);



}