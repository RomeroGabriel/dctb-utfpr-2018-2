/* Exemplo de conversao de tipos em operacoes matematicas.
   Opera��es com operandos de tipo diferentes, o resultado � do MAIOR tipo.
   Ou seja, neste caso, double com int d� double.

   N�o � um erro, e sim uma caracter�stica da linguagem C.            */

#include<stdio.h>

int main(){
   float media;
   media = 5.0/2;
   printf("\nO valor calculado foi %f",media);
   return 0;
}

