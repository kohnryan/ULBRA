#include <stdio.h>
int main(){
    //Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

    int nota1, nota2, nota3, peso1, peso2, peso3, media;
    printf("Digite nota1\n");
    scanf("%d%*c",&nota1);
    printf("Digite nota2\n");
    scanf("%d%*c",&nota2);
    printf("Digite nota3\n");
    scanf("%d%*c",&nota3);
    printf("digite peso1\n");
    scanf("%d%*c",&peso1);
    printf("Digite peso2\n");
    scanf("%d%*c",&peso2);
    printf("Digite peso3\n");
    scanf("%d%*c",&peso3);
    media=(nota1*peso1+nota2*peso2+nota3)/(peso1+peso2+peso3);
    printf("Media e:%d\n",media);

}