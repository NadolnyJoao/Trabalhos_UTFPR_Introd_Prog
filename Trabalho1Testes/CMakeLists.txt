cmake_minimum_required(VERSION 3.10)

project(Trabalho1Testes C)

include_directories(.)

# Substitui o GLOB e o add_executable antigo por esta única linha:
add_executable(trabalho_testes main.c Teste_Calcular_Area.c Teste_Detectar_Objeto_Area.c Teste_Detectar_Retangulo.c)
