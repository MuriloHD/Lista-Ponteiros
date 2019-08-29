#include <stdio.h>
#include <stdlib.h>


int compare(const void *a,const void *b){ // funcçao que compara 2 inteiros
  if(*(float*)a == *(float*)b){               // retorna 0 se forem iguais
    return 0;
  }
  else if(*(float*)a < *(float*)b){
    return -1;                           // retorna -1 se o primeiro for menor que o segundo
  }
  else{
    return 1;
  }
}

int main()
{
  int n;
  printf("digite a quantidade de números da lista\n");
  scanf("%i",&n);                                         // quantidade de numeros a serem coletados
  float *p = malloc(n*sizeof(float));                     // alocando um espaco de memoria para o ponteiro p
  printf("agora digite os números\n");
  for(int i = 0;i<n;i++)
  {
    scanf("%f",&p[i]);                                     // colcocando os numeros na memoria alocada;
  }

qsort(p, n, sizeof(int), compare);                        //funçao qsort para ordenar os elementos

  for(int i = 0;i<n;i++)
  {
    printf(" %.1f",p[i]);                                  // Imprime os elemntos
  };
  free(p);                                                  // libera a memoria alocada
  return 0;

}
