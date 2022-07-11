#include <stdio.h>

int main(void) { 
  //campo
  int linha, coluna;
  scanf("%i", &linha);
  scanf("%i", &coluna);
  char campo[linha][coluna];
  //revelar todas as células sem revelar uma das minas.

//TESTE EDVALDO 
printf("Hello day");
  //Uma mina é revelada: nesse caso, jogo encerra com a derrota do usuário;



  //Um número é revelado: o valor indica a quantidade de minas adjacentes considerando as 8 células ao redor de uma posição (vertical, horizontal e diagonais);


  //Uma posição vazia é revelada: nesse caso, o jogo aplica a ação revelar sobre todas as células adjacentes a essa posição, visto que ela não possui minas adjacentes.


  //O usuário vence o jogo ao revelar todas as células que não contêm minas. Por fim, a dificuldade do jogo irá determinar as dimensões da área do jogo e a quantidade de minas.
  return 0;
}