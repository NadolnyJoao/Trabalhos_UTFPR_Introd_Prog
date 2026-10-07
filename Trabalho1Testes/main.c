#include "Teste_Detectar_Objeto_Area.h"
#include "teste_calcula_area.h"
#include <stdio.h>

int main() {

  printf("%d\n",
         calcula_area(calcula_base(XSE, XID), calcula_altura(YSE, YID)));
  printf("%d\n", detecta_obj(XSE, XID, YSE, XID, 4, 3));

  return 0;
}
