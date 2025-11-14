#include "CartasSuperTrunfo.h"
#include <stdio.h>

#include "funcoesLeitoras.c"

static void lerEntrada(Trunfo *cartas, size_t posicao) {
  lerEstado(cartas + posicao);
  // Codigo é o unico dado exclusivo
  lerCodigo(cartas, posicao);
  lerNome(cartas + posicao);
  lerPopulacao(cartas + posicao);
  lerArea(cartas + posicao);
  lerPIB(cartas + posicao);
  lerPontosTuristicos(cartas + posicao);
  printf("\n"); // por questões de legibilidade no terminal
}

static inline void calcularDensidade(Trunfo *carta) {
  carta->densidade_populacional = (float)carta->populacao / carta->area;
}

static inline void calcularPIBPerCapita(Trunfo *carta) {
  carta->pib_per_capita = carta->pib / (float)carta->populacao;
}

static void calcularSuperPoder(Trunfo *carta) {
  float inverso = 1 / carta->densidade_populacional;

  carta->super_poder = (float)carta->populacao
    + carta->area
    + carta->pib
    + (float)carta->num_pontos_turisticos
    + carta->pib_per_capita
    + inverso;
}

void desafioAnterior(Trunfo *cartas) {
  for (size_t i = 0; i < 2; ++i) {
    cartas[i].id = i + 1;
    printf("Por favor insira as informações da carta %zu conforme requisitado!\n", i + 1);
    lerEntrada(cartas, i);
  }

  for (int i = 0; i < 2; ++i) { 
    calcularDensidade(cartas + i);
    calcularPIBPerCapita(cartas + i);
    calcularSuperPoder(cartas + i);
  }
} 
