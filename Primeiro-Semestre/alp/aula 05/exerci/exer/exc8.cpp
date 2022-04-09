#include <stdio.h>
int main(){
//Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
//valor do rendimento e o valor total depois do rendimento.

    float dep, taxa, rend, total;
    printf("Este programa calcula o rendimento final de um deposito\n");
    printf("Informe o valor do deposito\n");
    scanf("%f%*c",&dep);
    printf("Informe o valor das taxas de juros\n");
    scanf("%f%*c",&taxa);
    rend=dep*(taxa/100);
    printf("O valor de rendimento e:%.2f\n", rend);
    total=dep+rend;
    printf("O valor do rendimento final e: %.2f", total);


}