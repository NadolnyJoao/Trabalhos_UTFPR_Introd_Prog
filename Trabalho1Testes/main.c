#include "Teste_Detectar_Objeto_Area.h"
#include "Teste_Detectar_Retangulo.h"
#include "teste_calcula_area.h"
#include <stdio.h>

int main() {
  // Teste 1: Imprime a área do retângulo base. (Espera-se: 4)
  printf("%d\n",
         calcula_area(calcula_base(XSE, XID), calcula_altura(YSE, YID)));

  // Teste 2: Verifica se o ponto (4, 3) está no retângulo. (Espera-se: 1)
  printf("%d\n", detecta_obj(XSE, XID, YSE, YID, 4, 3));

  // Teste 3: Verifica se o retângulo de coordenadas (4,3) a (5,2) está contido
  // no principal. Agora retornará 0, pois a coordenada Y (3 até 2) forma um
  // retângulo inválido.
  printf("%d\n", detecta_ret(XSE, YSE, XID, YID, 4, 3, 5, 2));

  return 0;
}
