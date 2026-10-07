#include "teste_calcula_area.h"
int detecta_obj(int xSE, int xID, int ySE, int yID, int xPonto, int yPonto) {
  int xBate = 0, yBate = 0;
  if (xSE < xPonto && xPonto <= xID) {
    xBate = 1;
  }
  if (ySE > yPonto && yPonto >= yID) {
    yBate = 1;
  }
  if (xBate && yBate) {
    return 1;
  }
  return 0;
}
