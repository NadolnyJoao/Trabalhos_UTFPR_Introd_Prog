# Algoritmos de Geometria Plana & Processamento Espacial

> Implementação em linguagem C de algoritmos geométricos para cálculo de área de intersecção e localização de pares mais próximos em um plano cartesiano. Desenvolvido no contexto da disciplina de Fundamentos de Programação 1 (UTFPR).

---

## 📌 Sobre o Projeto

Este projeto tem como objetivo solucionar dois problemas de análise espacial e processamento geométrico sem a utilização de estruturas de dados avançadas (como vetores ou matrizes) nem funções de entrada e saída padrão (`printf`/`scanf`).

### ⚙️ Funcionalidades Principais

1. **Cálculo da Intersecção de Múltiplos Retângulos:**
   - Determina a área de intersecção comum a $N$ regiões retangulares sobre um plano cartesiano.
   - Aplica algoritmo de atalho (*early return*) para interromper a busca quando descobre-se que não há intersecção entre as regiões processadas.

2. **Busca do Par de Fornecedores Mais Próximo:**
   - Determina os centros dos retângulos e calcula a distância euclidiana entre todos os pares de regiões.
   - Retorna os dois identificadores em um único número inteiro sem sinal (`unsigned int`) através de manipulação de bits (*bit packing*).

---

## 🛠️ Tecnologias e Restrições

* **Linguagem:** C (C99 / ANSI C)
* **Ambiente de Desenvolvimento:** Code::Blocks
* **Bibliotecas Permitidas:** `<math.h>` (apenas `sqrt`) e `<float.h>` (apenas `FLT_MAX`).

### ⚠️ Restrições de Implementação
* **Proibido:** Uso de vetores, matrizes, alocação dinâmica ou ponteiros.
* **Proibido:** Uso da biblioteca padrão de E/S (`printf`, `scanf`) no arquivo de entrega.
* **Proibido:** Função `main` no arquivo de entrega.

---

## 📐 Especificação das Funções

### 1. `calculaInterseccao`

Calcula a área da região resultante da intersecção de $N$ retângulos.

```c
int calculaInterseccao(int n_retangulos);
```

* **Entrada:** `n_retangulos` (número total de retângulos a analisar).
* **Retorno:** A área da intersecção total (retorna `0` caso não exista intersecção).
* **Otimização Exigida:** Se em qualquer ponto da iteração a intersecção intermediária for nula (retângulos disjuntos), a função deve interromper o processamento e retornar `0`.

---

### 2. `encontraParMaisProximo`

Encontra o par de retângulos cujos centros geométricos possuem a menor distância euclidiana.

```c
unsigned int encontraParMaisProximo(int n_retangulos);
```

* **Entrada:** `n_retangulos` (número total de retângulos).
* **Centro Geométrico:** Calculado a partir das coordenadas do Ponto Superior Esquerdo (SE) e Inferior Direito (ID).
* **Retorno (Bit Packing):**
  * Retorna um `unsigned int` de 32 bits onde:
    * **Bits 31-16 (Mais significativos):** Identificador do retângulo de menor índice.
    * **Bits 15-0 (Menos significativos):** Identificador do retângulo de maior índice.
  * *Exemplo:* Para o par de índices 5 e 11, o valor retornado é `0x0005000B` (`327691` em decimal).

---

## 🔌 API de Funções Auxiliares

As coordenadas dos retângulos são fornecidas por funções utilitárias externas declaradas no cabeçalho `trabalho1.h`:

```c
int pegaXSE(int pos); // Retorna coordenada X do Superior Esquerdo
int pegaYSE(int pos); // Retorna coordenada Y do Superior Esquerdo
int pegaXID(int pos); // Retorna coordenada X do Inferior Direito
int pegaYID(int pos); // Retorna coordenada Y do Inferior Direito
```
*Onde `pos` é o índice do retângulo (variando de `0` até `n_retangulos - 1`).*

---

## 📂 Estrutura do Repositório

```text
.
├── main.c           # Programa de testes e macros de validação
├── trabalho1.h      # Cabeçalho com os protótipos das funções e auxiliares
├── trabalho1.c      # Implementação das funções auxiliares de teste
├── 11-x.c           # Arquivo do aluno contendo a implementação das funções
└── testes/*.txt     # Arquivos contendo cenários e dados de teste
```

---

## 🚀 Como Executar no Code::Blocks

1. Abra o **Code::Blocks** e crie um **Empty Project**.
2. Adicione os arquivos ao projeto:
   * `main.c`
   * `trabalho1.c`
   * `trabalho1.h`
   * Seu arquivo de código-fonte (ex: `11-x.c`)
3. Certifique-se de que o arquivo `.c` inclui o cabeçalho:
   ```c
   #include "trabalho1.h"
   ```
4. Para ativar ou desativar suítes de teste específicas, altere as macros `TESTA_X` no topo do arquivo `main.c`.
5. Compile e execute o projeto (`F9`).
