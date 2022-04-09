#include <stdio.h>
#include <math.h>
//Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
int main(){
     int numero1, numero2;

  printf ( " digite um numero:\n " );
  scanf ( " %d%*c " , &numero1);
  printf ( " digite um numero:\n " );
  scanf ( " %d%*c " , &numero2);
  
  int resultado = pow (numero1, numero2);
  printf ( " O numero %d elevado ao número %d e igual a: %d \n " , numero1, numero2, resultado);

}

