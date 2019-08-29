#include <stdio.h>

int main(){

int i,j
int *p,*q;

p = i; // errada pois o ponteiro pressisa apontar para um endereçõ de memoria
q = &j;  //correta
p = &*&i; // correta
i = (*&)j; // errado ,pois nao se pode por () entre um comando de memoria
i = *&j;  // correta
i = *&*&j; // correta
q = *p;  // errada, o ponteiro nao pode apontar para um valor apenas para uma memoria
i = (*p)++ + *q;// correto


}
