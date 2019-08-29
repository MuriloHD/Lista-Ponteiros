#include <stdio.h>


int main(){



float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;



aloha[2] = value;       //-valido  valido pois esta colocando o valor na posição 2 do vetor
scanf("%f", &aloha);   //-invalido  pois falta a posiçao da memoria onde o valor sera guardado
aloha = value";        // - invalido  Nem compila por causa do  "
printf("%f", aloha);   //-invalido  Erro falta a posição da memoria que sera mostrada
coisas[4][4] = aloha[3]; //-valido   coloca em coisas [4][4] o valor de aloha[3]
coisas[5] = aloha; //-invalido  erro ao chamar  coisas e faltou a porção de memoria de aloha a ser guardada em coisas
pf = value;   //-invalido  o jeito certo de se apontar uma variavel a um ponteiro e pf = &value
pf = aloha;   //-valido  o ponteiro apontara para o vetor

return 0;
}
