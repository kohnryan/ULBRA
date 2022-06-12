# aula_6
exercicios

# Exercicio 11 de algoritimos e grogramação
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
//Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
//a) o número digitado ao quadrado;
//b) o número digitado ao cubo;
//c) a raiz quadrada do número digitado;
//d) a raiz cúbica do número digitado
int main(){
float num, quad, cubo, r2, r3;
printf("digite um numero\n");
scanf("%f%*c",&num);
quad=pow(num,2);
cubo=pow(num,3);
r2=sqrt(num);
r3=cbrt(num);
printf("O numero digitado ao quadrado e:%.2f\n", quad);
printf("O numero digitado ao e: %.2f\n", cubo);
printf("A raiz quadrada do numero digitado e: %.2f\n", r2);
printf("A raiz cubica do numero digitado e: %.2f\n", r3);

}
