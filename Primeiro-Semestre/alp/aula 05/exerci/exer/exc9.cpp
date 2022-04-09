#include <stdio.h>
int main(){
    //Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.

    int base, altura, area;
    printf("Digite a base do triangulo\n");
    scanf("%d%*C",&base);
    printf("Digite a altuta do triangulo\n");
    scanf("%d%*c",&altura);
    area=(base*altura)/2;
    printf("%d,area");
}
