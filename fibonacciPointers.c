//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//Autor: Victor Brasil
//Nome do Arquivo: fibonacci.c
//Data de criação: 10/03/2021
//Descrição: cria uma sequência de Fibonacci
//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

#include <stdio.h>

int fibo (int *, int *);

void main(){

  int n; 		// termo de parada
  int a=0;		// valores da sequencia
  int b=1;		// valores da sequencia

  
  printf("Ate qual termo que ver?\n");
  printf("---> ");
  scanf("%d", &n);
  
  printf ("%d ",b);
  n=n-1;
  while (n>0){
    printf ("%d ",fibo(&a,&b));
 	  n=n-1;
  }

}

//////////////////////
int fibo (int *x, int *y){
  int soma = (*x + *y);
  *x = *y;
  *y = soma;

  return(soma);
}
