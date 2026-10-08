#include "teste_calcula_area.h" // Inclusão adicionada para garantir a consistência das assinaturas

// Calcula o comprimento da base garantindo que o valor seja sempre positivo
int calcula_base(int x1, int x2) {
  int base = x2 - x1;
  if (base < 0) {
    base *= -1;
  }
  return base;
}

// Calcula o comprimento da altura garantindo que o valor seja sempre positivo
int calcula_altura(int y1, int y2) {
  int altura = y2 - y1;
  if (altura < 0) {
    altura *= -1;
  }
  return altura;
}

// Retorna a área total multiplicando a base pela altura
int calcula_area(int base, int altura) {
  int area = base * altura;
  return area;
}
