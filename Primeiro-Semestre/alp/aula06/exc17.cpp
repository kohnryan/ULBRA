# include  <stdio.h >
# include  <stdlib.h >
# include  <math.h >


int  main () {

  float salario, cheque1, cheque2, cpmf1, cpmf2;

  printf ( " Valor do salario depositado: $ " );
  scanf ( " %f%*c " , &salario);
  printf ( " Verifique descontado: $ " );
  scanf ( " %f%*c " , &cheque1);
  printf ( " Verifique descontado: $ " );
  scanf ( " %f%*c " , &cheque2);
  cpmf1 = cheque1 * 0,38 / 100 ;
  cpmf2 = cheque2 * 0,38 / 100 ;
  salario = salario - (cheque1 + cpmf1) - (cheque2 + cpmf2) ;

  printf ( " O Saldo bancario atual e de: $ %.2f \n " , salario);

}