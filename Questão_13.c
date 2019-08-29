 //ponteiros para funcões é algo muito util para construir algoritimos genericos um exemplo:
#include <stdio.h>

int soma(int x,int y){
return x+y;

}

int main(){
  int a,b;

  int (*p)(int,int);

  printf("Digite 2 numeros");
  scanf("%d %d",&a,&b);

  p = soma;
printf("a soma de %d e %d e %d",a,b,p(a,b));


}

 //ponteiros tambem podem ser utilizados em argumentos de funçoes ex:
#include <stdio.h>

int calculo(int (*p)(int,int),int x,int y){
  return p(x,y);
}

int soma(int x,int y){
return x+y;

}

int mult(int x,int y){
  return x*y;
}

int main(){
  int a,b;



  printf("Digite 2 numeros");
  scanf("%d %d",&a,&b);


printf("a soma de %d e %d e %d",a,b,calculo(soma,a,b));

printf("\n a multiplicao de %d e %d e %d",a,b,calculo(mult,a,b));


}
