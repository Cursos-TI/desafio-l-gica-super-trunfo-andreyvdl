#include "CartasSuperTrunfo.h"
#include <stdio.h>

void compararPopulacao(Trunfo *cartas) {
  printf(
    "\nComparação de cartas (Atributo: População):\n"
    "Carta 1 - %s (%s): %d\n"
    "Carta 2 - %s (%s): %d\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].populacao,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].populacao
  );

  if (cartas[0].populacao == cartas[1].populacao)
    printf("Resultado: Empate!\n");
  else if (cartas[0].populacao > cartas[1].populacao)
    printf("Resultado: Carta 1 (%s) Venceu!\n", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!\n", cartas[1].nome_do_pais);
}

void compararArea(Trunfo *cartas) {
  printf(
    "\nComparação de cartas (Atributo: Área):\n"
    "Carta 1 - %s (%s): %.2f\n"
    "Carta 2 - %s (%s): %.2f\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].area,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].area
  );

  if (cartas[0].area == cartas[1].area)
    printf("Resultado: Empate!\n");
  else if (cartas[0].area > cartas[1].area)
    printf("Resultado: Carta 1 (%s) Venceu!\n", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!\n", cartas[1].nome_do_pais);
}

void compararPIB(Trunfo *cartas) {
  printf(
    "\nComparação de cartas (Atributo: PIB):\n"
    "Carta 1 - %s (%s): %.2f\n"
    "Carta 2 - %s (%s): %.2f\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].pib,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].pib
  );

  if (cartas[0].pib == cartas[1].pib)
    printf("Resultado: Empate!\n");
  else if (cartas[0].pib > cartas[1].pib)
    printf("Resultado: Carta 1 (%s) Venceu!\n", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!\n", cartas[1].nome_do_pais);
}

void compararPontoTuristicos(Trunfo *cartas) {
  printf(
    "\nComparação de cartas (Atributo: Pontos Turísticos):\n"
    "Carta 1 - %s (%s): %d\n"
    "Carta 2 - %s (%s): %d\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].num_pontos_turisticos,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].num_pontos_turisticos
  );

  if (cartas[0].num_pontos_turisticos == cartas[1].num_pontos_turisticos)
    printf("Resultado: Empate!\n");
  else if (cartas[0].num_pontos_turisticos > cartas[1].num_pontos_turisticos)
    printf("Resultado: Carta 1 (%s) Venceu!\n", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!\n", cartas[1].nome_do_pais);
}

void compararDensidadeDemografica(Trunfo *cartas) {
  printf(
    "\nComparação de cartas (Atributo: Densidade Demográfica):\n"
    "Carta 1 - %s (%s): %.2f\n"
    "Carta 2 - %s (%s): %.2f\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].densidade_populacional,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].densidade_populacional
  );

  if (cartas[0].densidade_populacional == cartas[1].densidade_populacional)
    printf("Resultado: Empate!\n");
  else if (cartas[0].densidade_populacional < cartas[1].densidade_populacional)
    printf("Resultado: Carta 1 (%s) Venceu!\n", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!\n", cartas[1].nome_do_pais);
}

void compararPIBPerCapita(Trunfo *cartas) {
  printf(
    "\nComparação de cartas (Atributo: Pib per Capita):\n"
    "Carta 1 - %s (%s): %.2f\n"
    "Carta 2 - %s (%s): %.2f\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].pib_per_capita,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].pib_per_capita
  );

  if (cartas[0].pib_per_capita == cartas[1].pib_per_capita)
    printf("Resultado: Empate!\n");
  else if (cartas[0].pib_per_capita > cartas[1].pib_per_capita)
    printf("Resultado: Carta 1 (%s) Venceu!\n", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!\n", cartas[1].nome_do_pais);
}

void compararSuperPoder(Trunfo *cartas) {
  printf(
    "\nComparação de cartas (Atributo: Super Poder):\n"
    "Carta 1 - %s (%s): %.2f\n"
    "Carta 2 - %s (%s): %.2f\n",
    cartas[0].nome_do_pais, cartas[0].estado, cartas[0].super_poder,
    cartas[1].nome_do_pais, cartas[1].estado, cartas[1].super_poder
  );

  if (cartas[0].super_poder == cartas[1].super_poder)
    printf("Resultado: Empate!\n");
  else if (cartas[0].super_poder > cartas[1].super_poder)
    printf("Resultado: Carta 1 (%s) Venceu!\n", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu!\n", cartas[1].nome_do_pais);
}

void compararSoma(Trunfo *cartas, float *somas) {
  printf(
    "\nComparação de cartas (Atributo: Soma dos atributos):\n"
    "Carta 1 - %s (%s): %.2f\n"
    "Carta 2 - %s (%s): %.2f\n",
    cartas[0].nome_do_pais, cartas[0].estado, somas[0],
    cartas[1].nome_do_pais, cartas[1].estado, somas[1]
  );

  if (somas[0] == somas[1])
    printf("Resultado: Empate!\n");
  else if (somas[0] > somas[1])
    printf("Resultado: Carta 1 (%s) Venceu!\n", cartas[0].nome_do_pais);
  else
    printf("Resultado: Carta 2 (%s) Venceu\n", cartas[1].nome_do_pais);
}