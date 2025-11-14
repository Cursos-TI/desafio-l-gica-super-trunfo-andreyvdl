#include "CartasSuperTrunfo.h"
#include <stdio.h>

void compararPopulacao(Trunfo *cartas) {
  int resultado = 0;

  printf(
    "\nComparação de cartas (Atributo: População):\n"
    "Carta 1 - %s (%s): %d\n"
    "Carta 2 - %s (%s): %d\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].populacao,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].populacao
  );

  resultado = cartas[0].populacao - cartas[1].populacao;
  if (resultado == 0)
    printf("Resultado: Empate!");
  else if (resultado > 0)
    printf("Resultado: Carta 1 (%s) Venceu!", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!", cartas[2].nome_do_pais);
}

void compararArea(Trunfo *cartas) {
  float resultado = 0;

  printf(
    "\nComparação de cartas (Atributo: Área):\n"
    "Carta 1 - %s (%s): %.2f\n"
    "Carta 2 - %s (%s): %.2f\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].area,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].area
  );

  resultado = cartas[0].area - cartas[1].area;
  if (resultado == 0)
    printf("Resultado: Empate!");
  else if (resultado > 0)
    printf("Resultado: Carta 1 (%s) Venceu!", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!", cartas[2].nome_do_pais);
}

void compararPIB(Trunfo *cartas) {
  float resultado = 0;

  printf(
    "\nComparação de cartas (Atributo: PIB):\n"
    "Carta 1 - %s (%s): %.2f\n"
    "Carta 2 - %s (%s): %.2f\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].pib,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].pib
  );

  resultado = cartas[0].pib - cartas[1].pib;
  if (resultado == 0)
    printf("Resultado: Empate!");
  else if (resultado > 0)
    printf("Resultado: Carta 1 (%s) Venceu!", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!", cartas[2].nome_do_pais);
}

void compararPontoTuristicos(Trunfo *cartas) {
  int resultado = 0;

  printf(
    "\nComparação de cartas (Atributo: Pontos Turísticos):\n"
    "Carta 1 - %s (%s): %d\n"
    "Carta 2 - %s (%s): %d\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].num_pontos_turisticos,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].num_pontos_turisticos
  );

  resultado = cartas[0].num_pontos_turisticos - cartas[1].num_pontos_turisticos;
  if (resultado == 0)
    printf("Resultado: Empate!");
  else if (resultado > 0)
    printf("Resultado: Carta 1 (%s) Venceu!", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!", cartas[2].nome_do_pais);
}

void compararDensidadeDemografica(Trunfo *cartas) {
  float resultado = 0;

  printf(
    "\nComparação de cartas (Atributo: Densidade Demográfica):\n"
    "Carta 1 - %s (%s): %.2f\n"
    "Carta 2 - %s (%s): %.2f\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].densidade_populacional,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].densidade_populacional
  );

  resultado = cartas[0].densidade_populacional - cartas[1].densidade_populacional;
  if (resultado == 0)
    printf("Resultado: Empate!");
  else if (resultado < 0)
    printf("Resultado: Carta 1 (%s) Venceu!", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!", cartas[2].nome_do_pais);
}
