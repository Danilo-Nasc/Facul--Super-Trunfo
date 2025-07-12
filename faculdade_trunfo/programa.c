#include <stdio.h>
/*Programa a seguir deve coletar informações de duas cartas do jogo "super trunfo"
deve ler os dados, estado, codigo da carta, nome da cidade, população, pontos turisticos, area e pib.
Logo em seguida, mostrar ao usuario as propriedades de cada carta (deve ler pelo menos duas cartas e mostrar separadamente, uma seguida da outra)*/

int main(){
    //variaveis para armazenar os dados inseridos pelo usuario.

  char estado[10], codigoDaCarta[4], nomeCidadde[20];
  int populacao, pontosTuristicos;
  float area, pib;

    printf("Digite as informações da primeira carta.\n");

    printf("Informe o estado: \n");
    scanf("%s", estado);
    printf("**********************************************\n");

    printf("Informe o codigo da carta:\n");
    scanf("%s", codigoDaCarta);
    printf("**********************************************\n");

    printf("Informe o nome da cidade\n");
    scanf("%s", nomeCidadde);
    printf("**********************************************\n");

    printf("Informe a quantidade populacional:\n");
    scanf("%d", &populacao);
    printf("**********************************************\n");

    printf("Informe o tamanho da area:\n");
    scanf("%f", &area);
    printf("**********************************************\n");

    printf("Digite o valo do PIB:\n");
    scanf("%f", &pib);
    printf("**********************************************\n");

    printf("Informe a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos);
    printf("**********************************************\n");

    printf("Primeira carta:\n");
    printf("**********************************************\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da carta: %s\n", codigoDaCarta);
    printf("Cidade: %s", nomeCidadde);
    printf("População: %d", populacao);
    printf("Area em km²: %.2f", area);
    printf("PIB: %.2f", pib);
    printf("Numeero de pontos turisticos: %d", pontosTuristicos);



    return 0;
}
