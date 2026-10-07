int calcula_base(int x1, int x2) {
  int base;
  base = x2 - x1;
  if (base > 0) {
    base *= -1;
    return base;
  }

  return base;
}

int calcula_altura(int y1, int y2) {
  int altura;
  altura = y2 - y1;
  if (altura > 0) {
    altura *= -1;
    return altura;
  }

  return altura;
}

int calcula_area(int base, int altura) {
  int area = base * altura;
  return area;
}
