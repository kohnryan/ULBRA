#include <stdio.h>
//Faça um programa que receba três notas, calcule e mostre a média aritmética.

int main(){
    int nota1, nota2, nota3, media;
    printf("Digite nota1\n");
    scanf("%d%*c",&nota1);
    printf("digite nota2\n");
    scanf("%d%*c",&nota2);
    printf("Digite nota3\n");
    scanf("%d%*c",&nota3);
    media=(nota1+nota2+nota3)/3;
    printf("A media é:%d\n",media);
    return 0; 

}