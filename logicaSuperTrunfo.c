#include "CartasSuperTrunfo.h"
#include <stdio.h>

#include "desafioAnterior.c"
#include "funcoesComparadoras.c"

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

static int selecionarAtributo(const int atributo_anterior) {
  int escolha = 0;
  int cursor = 0;

  while (escolha == 0) {
    printf("Digite o número do atributo de comparação:\n");
    if (atributo_anterior == 0)
      OPCOES_0();
    else if (atributo_anterior == 1)
      OPCOES_1();
    else if (atributo_anterior == 2)
      OPCOES_2();
    else if (atributo_anterior == 3)
      OPCOES_3();
    else if (atributo_anterior == 4)
      OPCOES_4();
    else if (atributo_anterior == 5)
      OPCOES_5();
    else if (atributo_anterior == 6)
      OPCOES_6();
    else if (atributo_anterior == 7)
      OPCOES_7();

    if (scanf("%d", &escolha) == EOF)
      exit(1);

    if (escolha < 1 || escolha > 7) {
      printf("Valor inserido é inválido\n");
      escolha = 0;
      LIMPAR_RESTO_DO_INPUT();
    } else if (atributo_anterior != 0 && escolha > 6) {
      printf("Valor inserido é inválido\n");
      escolha = 0;
      LIMPAR_RESTO_DO_INPUT();
    }
  }

  return escolha;
}

static void  compararCartas(Trunfo *cartas, int *atributos) {
  float somas[2] = {0.f};

  for (int i = 0; i < 2; ++i) {
    switch (atributos[i]) {
      case 1:
        compararPopulacao(cartas);
        somas[0] += (float)cartas[0].populacao;
        somas[1] += (float)cartas[1].populacao;
        break;
      case 2:
        compararArea(cartas);
        somas[0] += cartas[0].area;
        somas[1] += cartas[1].area;
        break;
      case 3:
        compararPIB(cartas);
        somas[0] += cartas[0].pib;
        somas[1] += cartas[1].pib;
        break;
      case 4:
        compararPontoTuristicos(cartas);
        somas[0] += (float)cartas[0].num_pontos_turisticos;
        somas[1] += (float)cartas[1].num_pontos_turisticos;
        break;
      case 5:
        compararDensidadeDemografica(cartas);
        somas[0] += cartas[0].densidade_populacional;
        somas[1] += cartas[1].densidade_populacional;
        break;
      case 6:
        compararPIBPerCapita(cartas);
        somas[0] += cartas[0].pib_per_capita;
        somas[1] += cartas[1].pib_per_capita;
        break;
      case 7:
        compararSuperPoder(cartas);
        somas[0] += cartas[0].super_poder;
        somas[1] += cartas[1].super_poder;
        break;
      default:
        printf("OPA algo deu errado!\n");
        exit(1);
    }
  }

  compararSoma(cartas, somas);
}

int main() {
  Trunfo cartas[2] = {0};
  int atributo_1 = 0, atributo_2 = 0;

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
  // switch (selecionarAtributo()) {
  //   case 1:
  //     compararPopulacao(cartas);
  //     break;
  //   case 2:
  //     compararArea(cartas);
  //     break;
  //   case 3:
  //     compararPIB(cartas);
  //     break;
  //   case 4:
  //     compararPontoTuristicos(cartas);
  //     break;
  //   case 5:
  //     compararDensidadeDemografica(cartas);
  //     break;
  //   default:
  //     printf("OPA algo deu muito errado!\n");
  //     exit(1);
  // }

  // Nível mestre
  printf("Escolha 2 atributos para comparação\n");
  atributo_1 = selecionarAtributo(0);
  atributo_2 = selecionarAtributo(atributo_1);

  if (atributo_1 <= atributo_2)
    atributo_2++;

  compararCartas(cartas, (int[2]){atributo_1, atributo_2});

  return 0;
}
