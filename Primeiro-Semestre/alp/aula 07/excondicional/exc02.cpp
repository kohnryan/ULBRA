#include <stdio.h>
#include <math.h>

int main(){

    float nota1, nota2, nota3, media, nota_exame;
    printf("digite sua nota 01\n");
    scanf("%f%*c",&nota1);
    printf("digite sua nota 02\n");
    scanf("%f%*c",&nota2);
    printf("digite sua nota 03\n");
    scanf("%f%*c",&nota3);
    media=(nota1+nota2+nota3);
    if ((media >=7) && (media <=10)) {
    printf("Aprovado");
    }else if((media >=37) && (media <7)){
        printf("Exame");
        nota_exame= 12 - media;
        printf("Voce deve tirar : %.2f",nota_exame);
    }else if((media >=0) && (media <3)){
        printf("Reprovado");
    }else{
        printf("DADOS INVALIDOS!!!");
    }
    {
        /* code */
    }
    

}