#include <stdio.h>
#include <stdlib.h>
//Sabe-se que:
//pé = 12 polegadas
//1 jarda = 3 pés
//1 milha = 1,760 jarda
//Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
//a) polegadas;
//b) jardas;
//c) milhas

int main (){
    float pes, polegadas, jardas, milhas;
    printf("Informe a media em pes:\n");
    scanf("%f%*c",&pes);
    polegadas=pes*12;
    jardas=pes/3;
    milhas=pes/5280;

    printf("%.2F pes=%.2f Polegadas\n", pes, polegadas);
    printf("%.2fpes=%.2f jardas\n",pes, jardas);
    printf("%.2f pes=%.2f milhas\n", pes, milhas);
}