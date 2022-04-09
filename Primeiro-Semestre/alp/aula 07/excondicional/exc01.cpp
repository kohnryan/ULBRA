#include <stdio.h>
#include <math.h>

int main()
{
    
    float nota_trap, aval_sem, exame,  media;
    printf("Digite a nota do trabalho de laboratorio:\n");
    scanf("%f%*c",&nota_trap);
    printf("Digite aa nota da avaliacao semestral:");
    scanf("%f%*c",&aval_sem);
    printf("Digite a nota do exame final:");
    scanf("%f%*c",&exame);
    media=(nota_trap*2+aval_sem*3+exame*5) / 10;
    printf ("Media ponderada %2.f\n",media);
    if (media >=8 && media <=10){
    printf("Obteve conceito A\n");
    }
     if (media >=7 && media <8){
    printf("Obteve conceito B\n");}
    
    if (media >=6 && media <7){
    printf("Obteve conceito C\n");}
    
    if ( media >= 5 && media <6){
    printf("Obteve conceito D\n");}
    
    if (media >=0 && media <5){
    printf("Obteve conseito E");}
    return 0;
}
