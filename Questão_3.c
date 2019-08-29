#include <stdio.h>

int main() {

int i=5, *p;
p = &i;
 //printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4)

// para o primeiro caso como temos o endereço 4094 ele sera convertido para a base numerica hexadecimal
int test= 4094;
printf("%x",test);
// 2 ele vai pegar o valor de *p e vai somar com 2
printf("\n %d",*p+2);
// &p ele so pega o endereço da variavel, *&p esta associado ao valor(computacional ) do ponteiro p (endereço),**&P disreferencia(pega) o valor de p
printf("\n %d",**&p);
// pega o valor de *p e multiplica pror 3*
printf("\n %d",3**p);

//vai pegar o valor de i
printf("\n %d",**&p+4);

}
