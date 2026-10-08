#include "Teste_Detectar_Objeto_Area.h"
#include "teste_calcula_area.h"

// Verifica se um ponto (xPonto, yPonto) está dentro da área do retângulo
int detecta_obj(int xSE, int xID, int ySE, int yID, int xPonto, int yPonto) {
  int xBate = 0, yBate = 0;

  // Confirma se o ponto está dentro dos limites horizontais
  if (xSE <= xPonto && xPonto <= xID) {
    xBate = 1;
  }

  // Confirma se o ponto está dentro dos limites verticais
  if (ySE <= yPonto && yPonto <= yID) {
    yBate = 1;
  }

  // Se estiver contido em ambos os eixos, o ponto está na área
  if (xBate && yBate) {
    return 1;
  }
  return 0;
}
