#include <stdio.h>
//Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
//sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.

int main(){

    int sal, salreceber, imp;
    printf("Digite seu salario:\n");
    scanf("%d%*c",&sal);
    imp=sal*10/100;
    salreceber=sal+50-imp;
    printf("Seu salario e de : %d\n", salreceber);

}