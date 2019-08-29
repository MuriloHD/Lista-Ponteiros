#include <stdio.h>

int main() {


int i=3,j=5;
int *p, *q;
p = &i;
q = &j;


// Primeira expressão
int c;
c = (p == &i);
printf("Ela e %i" ,c);
// segunda expressão
c = *p - *q;
printf("\n O valor da expressão é %i",c);
// terceira expressão
printf("\n vai sair %i",**&p);

//Quarta expressao
float f;
f = 3 - (*p)/(*q) + 7;
printf("\n o valor da expressao e %f",f);

}
