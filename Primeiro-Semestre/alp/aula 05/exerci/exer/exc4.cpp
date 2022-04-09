#include <stdio.h>
//Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
//que este sofreu um aumento de 25%.

int main(){
    float sal, novoSalario;
   
    printf("Digite o valor de salalario\n");
    scanf("%f%*c",&sal);
    novoSalario=sal+(sal*25/100);
    printf("Valor novosal %f",novoSalario);
}
