#include <stdio.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
}



int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}



// o primeiro programa desreferencia o valor de que esta no vetor[i]
// e o segundo mostra a memoria onde esta localizada o vetor[i]
