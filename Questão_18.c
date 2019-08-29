#include <stdio.h>
#include <stdlib.h>

void soma (int *v1 ,int *v2,int *v3,int tam){ // soma dois vetores
  for(int i = 0;i<tam;i++){
    v3[i] = v1[i] + v2[i];
  }

}


int main()
{
  int *v1,*v2,*v3,tam;
printf("Entre com o tamanho dos vetores");
scanf("%d",&tam);
v1 = malloc(tam*sizeof(int));
v2 = malloc(tam*sizeof(int));
v3 = malloc(tam*sizeof(int));
// 
printf("Entre com o primeiro vetor");
for(int i = 0;i<tam;i++){
    scanf("%d",&v1[i]);
}
printf("Entre com o segundo vetor");
for(int i = 0;i<tam;i++){
    scanf("%d",&v2[i]);
}

soma(v1,v2,v3,tam);

for(int i = 0;i<tam;i++){
    printf("%d ",v3[i]);
}
free(v1);
free(v2);
free(v3);
return 0;

}
