#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int compare(const void *a,const void *b){
  if(*(float*)a == *(float*)b){
    return 0;
  }
  else if(*(float*)a < *(float*)b){
    return -1;
  }
  else{
    return 1;
  }
}


void ord(float *v,int tam){
  for(int j = 0;j<tam;j++){
    for(int h = j+1;h<tam;h++)
    {
      if(compare(&v[j],&v[h]) == 1)
      {
        int aux = v[j];
        v[j] = v[h];
        v[h] = aux;
      }
    }
  }


}


int main()
{
    srand(time(NULL));
  int n;
   clock_t TI,TF,TI2,TF2;
   float  TimeQs,TimeMY;
  printf("digite a quantidade de números da lista\n");
 n = 100000;
  float *p = malloc(n*sizeof(float));
  float *g = malloc(n*sizeof(float));
  printf("agora digite os números\n");

  for(int i = 0;i<n;i++)
  {
   p[i] = rand() % 1000;
  }

  for(int i = 0;i<n;i++)
  {
    g[i] = p[i];
  }

  TI = clock();
  qsort(p, n, sizeof(float), compare);
  TF = clock();

  TimeQs = (TF - TI);
printf("\nTempo Qsort: %f",TimeQs);
  TI2 =clock();
  ord(g,n);
  TF2 = clock();

  TimeMY = (TF2-TI2);

  printf("\nTempo Qsort: %f ms",TimeQs);
  printf("\nTempo Minha ordenação: %f ms",TimeMY);


  free(p);
  free(g);
  return 0;

}
