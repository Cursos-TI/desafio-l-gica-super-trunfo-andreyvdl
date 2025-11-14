#ifndef _CARTAS_SUPER_TRUNFO_H
    #define _CARTAS_SUPER_TRUNFO_H 1

    #define CODIGO_TAMANHO 4
    #define CIDADE_TAMANHO 256
    #define ESTADO_TAMANHO 3

    #define LIMPAR_RESTO_DO_INPUT() while((cursor = getchar()) != '\n' && cursor != EOF)

/**
 * Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 * Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 * Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 * População: O número de habitantes da cidade. Tipo: int
 * Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 * PIB: O Produto Interno Bruto da cidade. Tipo: float
 * Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
 *
 * nivel 3 altera a populacao para unsigned long int.
 *
 * tema 2 nivel 1 altera população para int.
 * tema 2 nivel 1 altera o estado pra string agora representado por 2 letras.
 * tema 2 nivel 1 altera indiretamente o código da carta de 'x0y' para 'xxy'.
 *
 * tema 2 nível 2 altera nome da cidade por nome do país.
 */
typedef struct Trunfo {
    char nome_do_pais[CIDADE_TAMANHO], codigo_da_carta[CODIGO_TAMANHO];
    char estado[ESTADO_TAMANHO];
    float area, pib, densidade_populacional, pib_per_capita, super_poder;
    int populacao;
    int num_pontos_turisticos, id;
} Trunfo;

#endif