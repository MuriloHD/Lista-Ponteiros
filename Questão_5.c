#include <stdio.h>

int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);
// saiu como o esperado pois o ponteiro alterou o valor que esta na memoria da variavel valor


  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);
// mesma coisa do caso anterior
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);
// a saida esta conforme o esperado pois p ponteiro p3 esta apontando para o byte que contem a letra P

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);
// a saida esta conforme o esperado pois p ponteiro p3 esta apontando para o byte que contem a letra e
  /* (e) */
  p3 = nome;
  printf("%c \n", *p3);
// o ponteiro p3 ira apontar para o primeiro byte da sequencia dos char´s que no caso e P


  /* (f) */
  p3 = p3 + 4;
  printf("%c \n", *p3);
// o ponteiro agora a pontara para o endereço do 4 byte de memoria que contem o caracter e

  /* (g) */
  p3--;
  printf("%c \n", *p3);
  //agora o ponteiro apontara para o endereço de memoria 3 que contem o caracter t


  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);
  // o ponteiro esta apontando para o primeiro endereço de memoria do vetor ou seja o vetor[0]

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);
  //em p4 +1 o ponteiro caminhou na memoria para o segundo elemento do vetor e esse endereço guardou em p5,ou seja p4 guardava o endereço de vetor[0] e p5 guarda o endereço de vetor[1]

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);
//em p5 +1 o ponteiro caminhou na memoria para o terceiro elemento do vetor e esse endereço guardou em p4,ou seja p5 guardava o endereço de vetor[1] e p4 guarda o endereço de vetor[2]
  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);
// o ponteiro p4 que guardava o endereco de vetor[2] caminhou -2 na memoria e agora guarda o valor de vetor[0]
  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);
//a primeira parte &vetor[2] pega o endereco de memoria do vetor[2] e -1 anda uma casa para traz na memoria assim ficando com o endereco de vetor[1]
  /* (n) */
  p5++;
  printf("%d \n", *p5);
  // anda uma casa na memoria se antes p5 guardava o endereco de memoria  de vetor[1] agora guarda o endereco de vetor[2]
  return(0);
}
//Todos os resutados sairam como esperado;
