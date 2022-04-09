#include <stdio.h>
int main(){
//Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = p * R2

    float area, pi=3.1415, raio;
    printf("raio=\n");
    scanf("%f%*c",&raio);
    area= pi*raio*raio;
    printf("area=%.2f m2 \n",area);


}