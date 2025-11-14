#include "CartasSuperTrunfo.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

static int codigoInvalido(char *codigo_input, Trunfo *cartas, size_t posicao);
static int estadoInvalido(char *estado_input);

void lerEstado(Trunfo *carta) {
  char estado[ESTADO_TAMANHO] = {0};
  int cursor = 0;

  while (1) {
    printf("Insira o Estado, apenas 2 letras: ");
    if (scanf("%2s", estado) == EOF)
      exit(1);

    for (int i = 0; i < ESTADO_TAMANHO; ++i)
      estado[i] = toupper(estado[i]);

    if (estadoInvalido(estado)) {
      printf("Valor inserido é invalido!\n");
      for (int i = 0; i < ESTADO_TAMANHO; ++i)
        estado[i] = '\0';
      LIMPAR_RESTO_DO_INPUT();
    } else {
      for (int i = 0; i < ESTADO_TAMANHO; ++i)
        carta->estado[i] = estado[i];
      break;
    }
  }
  LIMPAR_RESTO_DO_INPUT();
}

void lerCodigo(Trunfo *cartas, size_t posicao) {
  char codigo_da_carta[CODIGO_TAMANHO] = {0};
  int cursor = 0;

  while (1) {
    printf(
      "Insira o código da carta, "
      "deve ter três caracteres, os dois primeiros sendo o mesmo do estado "
      "e o útlimo um numero de 1 a 4: "
    );
    if (scanf("%3s", codigo_da_carta) == EOF)
      exit(1);

    for (int i = 0; i < 2; ++i)
      codigo_da_carta[i] = toupper(codigo_da_carta[i]);

    if (codigoInvalido(codigo_da_carta, cartas, posicao)) {
      printf("Valor inserido é invalido!\n");
      for (int i = 0; i < CODIGO_TAMANHO; ++i)
        codigo_da_carta[i] = '\0';
      LIMPAR_RESTO_DO_INPUT();
    } else {
      for (int i = 0; i < CODIGO_TAMANHO; ++i)
        cartas[posicao].codigo_da_carta[i] = codigo_da_carta[i];
      break;
    }
  }
  LIMPAR_RESTO_DO_INPUT();
}

void lerNome(Trunfo *carta) {
  char nome_do_pais[CIDADE_TAMANHO] = {0};
  int cursor = 0;

  while (1) {
    printf(
      "Insira o nome do país, limite de 255 caracteres, "
      "os caracteres extras serão ignorados: "
    );
    if (scanf("%255[^\n]", nome_do_pais) == EOF)
      exit(1);

    if (strlen(nome_do_pais) == 0) {
      printf("O nome da cidade não pode ser deixado em branco!\n");
    } else {
      for (int i = 0; nome_do_pais[i]; ++i)
        carta->nome_do_pais[i] = nome_do_pais[i];
      break;
    }
  }
  LIMPAR_RESTO_DO_INPUT();
}

void lerPopulacao(Trunfo *carta) {
  unsigned long int populacao = 0;
  int cursor = 0;

  while (1) {
    printf("Insira o número de habitantes, como número inteiro: ");
    if (scanf("%lu", &populacao) == EOF)
      exit(1);

    if (populacao == 0) {
      printf("População não pode ser igual a 0!\n");
      populacao = 0;
      LIMPAR_RESTO_DO_INPUT();
    } else {
      carta->populacao = populacao;
      break;
    }
  }
  LIMPAR_RESTO_DO_INPUT();
}

void lerArea(Trunfo *carta) {
  float area = 0.f;
  int cursor = 0;

  while (1) {
    printf("Insira a área da cidade em Km² no formato decimal (ex: 120.64): ");
    if (scanf("%f", &area) == EOF)
      exit(1);

    if (area < 0.000001f) { // 6 de precisão deve ser o suficiente
      printf("Área não pode ser igual ou menor a 0!\n");
      area = 0.f;
      LIMPAR_RESTO_DO_INPUT();
    } else {
      carta->area = area;
      break;
    }
  }
  LIMPAR_RESTO_DO_INPUT();
}

void lerPIB(Trunfo *carta) {
  float pib = 0.f;
  int cursor = 0;

  while (1) {
    printf("Insira o PIB em bilhões no formato decimal (ex: 28.16): ");
    if (scanf("%f", &pib) == EOF)
      exit(1);

    if (pib < 0.f) {
      printf("PIB não pode ser negativo!\n");
      pib = 0.f;
      LIMPAR_RESTO_DO_INPUT();
    } else {
      carta->pib = pib;
      break;
    }
  }
  LIMPAR_RESTO_DO_INPUT();
}

void lerPontosTuristicos(Trunfo *carta) {
  int pontos_turisticos = 0;
  int cursor = 0;

  while (1) {
    printf("Insira o número de pontos turísticos da cidade, como número inteiro: ");
    if (scanf("%d", &pontos_turisticos) == EOF)
      exit(1);

    if (pontos_turisticos < 0) {
      printf("Pontos turísticos não pode ser negativo!\n");
      pontos_turisticos = 0;
      LIMPAR_RESTO_DO_INPUT();
    } else {
      carta->num_pontos_turisticos = pontos_turisticos;
      break;
    }
  }
  LIMPAR_RESTO_DO_INPUT();
}

static int codigoInvalido(char *codigo_input, Trunfo *cartas, size_t posicao) {
  if (strlen(codigo_input) < 3)
    return -1;
  else if (strncmp(codigo_input, cartas[posicao].estado, 2) != 0)
    return -1;
  else if (codigo_input[2] < '1' || codigo_input[2] > '4')
    return -1;

  for (size_t i = 0; i < posicao; ++i) {
    if (strcmp(codigo_input, cartas[i].codigo_da_carta) == 0)
      return -1;
  }

  return 0;
}

static int estadoInvalido(char *estado_input) {
  if (strlen(estado_input) < 2)
    return -1;

  for (int i = 0; estado_input[i]; ++i) {
    if (!isalpha(estado_input[i]))
      return -1;
  }
  return 0;
}