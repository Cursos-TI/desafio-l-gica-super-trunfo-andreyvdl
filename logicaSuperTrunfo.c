#include "CartasSuperTrunfo.h"
#include <stdio.h>

#include "desafioAnterior.c"
#include "funcoesComparadoras.c"

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

static int selecionarAtributo(void) {
  int escolha = 0;
  int cursor = 0;

  while (escolha == 0) {
    printf(
      "Digite o número do atributo de comparação:\n"
      "1) População\n"
      "2) Área\n"
      "3) PIB\n"
      "4) Número de pontos turísticos\n"
      "5) Densidade demográfica\n"
      "> "
    );
    if (scanf("%d", &escolha) == EOF)
      exit(1);

    if (escolha < 1 || escolha > 5) {
      printf("Valor inserido é inválido\n");
      escolha = 0;
      LIMPAR_RESTO_DO_INPUT();
    }
  }

  return escolha;
}

int main() {
  Trunfo cartas[2] = {0};

  desafioAnterior(cartas);

  /*
    tema 2 iniciante:
    2. Calcular Densidade Populacional e PIB per capita: O programa deve calcular e exibir:
    ◦ Densidade Populacional: População / Área
    ◦ PIB per capita: PIB / População
  */
  // for (int i = 0; i < 2; ++i) {
  //   printf(
  //     "Carta %d:\n"
  //     "Densidade populacional: %.2f\n"
  //     "PIB per captita: %.2f\n\n",
  //     cartas[i].id,
  //     cartas[i].densidade_populacional,
  //     cartas[i].pib_per_capita
  //   );
  // }

  // Nível aventureiro
  switch (selecionarAtributo()) {
    case 1:
      compararPopulacao(cartas);
      break;
    case 2:
      compararArea(cartas);
      break;
    case 3:
      compararPIB(cartas);
      break;
    case 4:
      compararPontoTuristicos(cartas);
      break;
    case 5:
      compararDensidadeDemografica(cartas);
      break;
    default:
      printf("OPA algo deu muito errado!\n");
      exit(1);
  }

  return 0;
}
