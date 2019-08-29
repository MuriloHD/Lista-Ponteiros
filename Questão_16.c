#include <stdio.h>
#include <stdlib.h>


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


int main()
{
  int n;
  printf("digite a quantidade de números da lista\n");
  scanf("%d",&n);
  float *p = malloc(n*sizeof(float));  
  printf("agora digite os números\n");
  for(int i = 0;i<n;i++)
  {
    scanf("%f",&p[i]);
  }
  for(int j = 0;j<n;j++){
    for(int h = j+1;h<n;h++)
    {
      if(compare(&p[j],&p[h]) == 1)      //  usando a funçao com ponteiros e faz a troca
      {
        int aux = p[j];
        p[j] = p[h];
        p[h] = aux;
      }
    }
  }
  for(int i = 0;i<n;i++)
  {
    printf(" %.1f",p[i]);
  }
  free(p);
  return 0;

}
