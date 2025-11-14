#include "CartasSuperTrunfo.h"
#include <stdio.h>

#include "desafioAnterior.c"

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  Trunfo cartas[2] = {0};

  desafioAnterior(cartas);

  /*
    2. Calcular Densidade Populacional e PIB per capita: O programa deve calcular e exibir:
    ◦ Densidade Populacional: População / Área
    ◦ PIB per capita: PIB / População
  */
  for (int i = 0; i < 2; ++i) {
    printf(
      "Carta %d:\n"
      "Densidade populacional: %.2f\n"
      "PIB per captita: %.2f\n\n",
      cartas[i].id,
      cartas[i].densidade_populacional,
      cartas[i].pib_per_capita
    );
  }

  printf(
    "Comparação de cartas (Atributo: PIB per Capita):\n"
    "Carta 1 - %s (%s): %.2f\n"
    "Carta 2 - %s (%s): %.2f\n",
    cartas[0].nome_da_cidade, cartas[0].estado, cartas[0].pib_per_capita,
    cartas[1].nome_da_cidade, cartas[1].estado, cartas[1].pib_per_capita
  );

  if (cartas[0].pib_per_capita > cartas[1].pib_per_capita)
    printf("Resultado: Carta 1 (%s) venceu!\n\n", cartas[0].nome_da_cidade);
  else 
    printf("Resultado: Carta 2 (%s) venceu!\n\n", cartas[1].nome_da_cidade);

  return 0;
}
