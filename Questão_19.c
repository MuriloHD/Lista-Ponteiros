#include <stdio.h>
#include <stdlib.h>


void multiplicar(int** a,int** b,int** c,int linA,int colA,int colB){  // função que multiplica duas matrizes
 for (int i=0;i<linA; i++) {
      for (int j=0; j<colB; j++) {
        for (int k=0; k<colA; k++) {
          c[i][j] = c[i][j] + (a[i][k] * b[k][j]);

        }
        printf("\ n%d",c[i][j]);
      }

    }

}

int main()
{
 int **m1,**m2,**m3;
 int nla,nca,ncb;

printf("Digite o numero de linhas de a");
  scanf("%i",&nla);

printf("Digite o numero de colunas de a");
  scanf("%d",&nca);

printf("Digite o numero de clunas de b");
  scanf("%d",&ncb);
// coleta os valores das colunas e linhas das matrizes sabemos que a quantidade de  linhas b é igual a quantidade de cclunas de a
 m1 = (int**) malloc(nla*sizeof(int*));
 for(int i = 0;i<nca;i++){
   m1[i] = (int *)malloc(nca*sizeof(int));
 }

 m2 = (int**) malloc(nca*sizeof(int*));
 for(int i = 0;i<ncb;i++){
   m2[i] = (int *)malloc(ncb*sizeof(int));
 }

 m3 = (int**)malloc(nla*sizeof(int*));
 for(int i =0;i<ncb;i++){
   m3[i] = (int*)malloc(ncb*sizeof(int));
 }
// aloca a memnora
printf("Entre com os elementos da primeira matriz");
for(int i = 0;i<nla;i++){
  for(int j=0;j<nca;j++){
    scanf("%d",&m1[i][j]);
  }
}
printf("Entre com os elementos da segunda matriz");
for(int i = 0;i<nca;i++){
  for(int j=0;j<ncb;j++){
    scanf("%d",&m2[i][j]);
  }
}
// coleta os elemntos

multiplicar(m1,m2,m3,nla,nca,ncb);
// multiplica as matrizes
for(int i = 0;i<nla;i++){
  for(int j=0;j<ncb;j++){
  printf(" %d",m3[i][j]);
  }
  printf("\n");
}
// exibe o resultado
for(int i = 0;i<nca;i++){
   free(m2[i]);
 }
 free(m2);

for(int i = 0;i<nla;i++){
   free(m1[i]);
 }
 free(m1);

for(int i = 0;i<nla;i++){
   free(m3[i]);
 }
 free(m3);
// libera a memorria

return 0;
}
