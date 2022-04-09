#include <stdio.h>
//O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do

//distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fá-
//brica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:

//a) o valor correspondente ao lucro do distribuidor;
//b) o valor correspondente aos impostos;
//c) o preço final do veículo.

int main(){

float precoFabrica, perceLucro, percImposto, lucroDistribuidor, imposto, precoFinal;
  printf ( " Digite o preco de fabrica do veiculo: $ " );
  scanf ( " %f%*c " , &precoFabrica);
  printf ( " Digite o percentual de lucro do distribuidor: " );
  scanf ( " %f%*c " , &perceLucro);
  printf ( " Digite o percentual de imposto: " );
  scanf ( " %f%*c " , &percImposto);

  lucroDistribuidor = precoFabrica *perceLucro/ 100 ;
  imposto = precoFabrica *percImposto/ 100 ;
  precoFinal = precoFabrica + lucroDistribuidor + imposto;
  printf ( " O lucro do distribuidor sobre um veículo no valor de $ %.2f será de $ %.2f  \n " ,precoFabrica, lucroDistribuidor);
  printf ( " O valor do imposto será de $ %.2f  \n " , imposto);
  printf ( " O preço final do veículo fixo sem valor de $ %.2f \n " ,precoFinal);

}