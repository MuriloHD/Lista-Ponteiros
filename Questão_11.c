#include <stdio.h>



int main(){
  char x1[4];
  int x2[4];
  float x3[4];
  double x4[4];

  char *p1 = x1;
  int *p2 = x2;
  float *p3 = x3;
  double *p4 = x4;

  printf("char");
  for(int i=0;i<5;i++){
      printf(" i = %d endereco %p", i, (x1+i));
  }
  printf("\n int");
  for(int i=0;i<5;i++){
      printf(" i = %d endereco %p", i, (x2+i));
  }

  printf("\n float");
  for(int i=0;i<5;i++){
      printf(" i = %d endereco %p", i, (x3+i));

  }
  printf("\n double");
  for(int i=0;i<5;i++){
      printf(" i = %d endereco %p", i, (x4+i));
  }
}

// os resultados foraam como esperado
