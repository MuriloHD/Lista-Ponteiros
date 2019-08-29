#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("digite a quantidade de números da lista\n");
  scanf("%d",&n);
  float *p = malloc(n*sizeof(float));    //aloca uma memoria para o vetor
  printf("agora digite os números\n");
  for(int i = 0;i<n;i++)
  {
    scanf("%f",&p[i]);
  }
  for(int j = 0;j<n;j++){ // faz a ordenação dos numeros
    for(int h = j+1;h<n;h++)
    {
      if(p[j]>p[h])
      {
        int aux = p[j];
        p[j] = p[h];
        p[h] = aux;
      }
    }
  }                     // mostra vertor ordenado
  for(int i = 0;i<n;i++)
  {
    printf(" %.1f",p[i]);
  }
  free(p);
  return 0;

}
