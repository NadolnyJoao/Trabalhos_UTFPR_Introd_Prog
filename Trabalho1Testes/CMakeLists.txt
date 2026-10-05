cmake_minimum_required(VERSION 3.10)

# Nome do seu projeto (Trabalho da UTFPR)
project(Trabalho1Testes C)

# Como os arquivos .h (se você criar algum) vão ficar nesta mesma pasta,
# dizemos ao CMake para procurar os headers na raiz do projeto (.)
include_directories(.)

# Busca automaticamente todos os arquivos .c que estão nesta pasta raiz
file(GLOB SOURCES "*.c")

# Cria o executável final com o nome "trabalho_testes" juntando todos os .c encontrados
add_executable(trabalho_testes ${SOURCES})
