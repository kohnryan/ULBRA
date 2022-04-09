#include <stdio.h>
//Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
//sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% tam-
//bém sobre o salário base.

int main(){
    int sal, salreceber, grat, imp;
    printf("Digite seu salario:\n");
    scanf("%d%*c",&sal);
    grat=sal*5/100;
    imp=sal*7/100;
    salreceber=sal+grat-imp;
    printf("Seu salario e de : %d\n",salreceber);

}