#include "CartasSuperTrunfo.h"
#include <stdio.h>

#include "desafioAnterior.c"

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Definição das variáveis para armazenar as propriedades das cidades
  // Você pode utilizar o código do primeiro desafio
  Trunfo cartas[2] = {0};

  // Cadastro das Cartas:
  // Implemente a lógica para solicitar ao usuário que insira os dados das
  // cidades utilizando a função scanf para capturar as entradas. utilize o
  // código do primeiro desafio
  // Exemplo:
  // printf("Digite o código da cidade: ");
  // scanf("%s", codigo);
  //
  // (Repita para cada propriedade)
  desafioAnterior(cartas);

  // Comparação de Cartas:
  // Desenvolva a lógica de comparação entre duas cartas.
  // Utilize estruturas de decisão como if, if-else para comparar atributos como
  // população, área, PIB, etc.

  // Exemplo:
  // if (populacaoA > populacaoB) {
  //     printf("Cidade 1 tem maior população.\n");
  // } else {
  //     printf("Cidade 2 tem maior população.\n");
  // }

  // Exibição dos Resultados:
  // Após realizar as comparações, exiba os resultados para o usuário.
  // Certifique-se de que o sistema mostre claramente qual carta venceu e com
  // base em qual atributo.

  // Exemplo:
  // printf("A cidade vencedora é: %s\n", cidadeVencedora);

  printf(
    "Comparação de cartas (Atributo: PIB per Capita):\n"
    "Carta 1 - %s (%c): %.2f\n"
    "Carta 2 - %s (%c): %.2f\n",
    cartas[0].nome_da_cidade, cartas[0].estado, cartas[0].pib_per_capita,
    cartas[1].nome_da_cidade, cartas[1].estado, cartas[1].pib_per_capita
  );

  if (cartas[0].pib_per_capita > cartas[1].pib_per_capita)
    printf("Resultado: Carta 1 (%s) venceu!\n\n", cartas[0].nome_da_cidade);
  else 
    printf("Resultado: Carta 2 (%s) venceu!\n\n", cartas[1].nome_da_cidade);

  return 0;
}
