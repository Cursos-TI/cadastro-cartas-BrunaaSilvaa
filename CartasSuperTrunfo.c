#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main() {
  // Área para definição das variáveis para armazenar as propriedades da Carta 1

    char Estado1; //Uma letra de 'A' a 'H' representando um dos 8 estados
    char Código_carta1[4]; // A letra do estado seguida de um número de 01 a 04
    char Cidade1[50]; // Nome da cidade
    int População1; //Números de habitantes
    float Área1; // Área da cidade em quilômetros quadrados
    float PIB1; // Produto interno bruto da cidade
    int Números_de_pontos_turistícos1; // Quantidade de pontos turísticos na cidade

    //Área para definição das variáveis para armazenar as propriedades da Carta 2

    char Estado2; //Uma letra de 'A' a 'H' representando um dos 8 estados
    char Código_carta2[4]; // A letra do estado seguida de um número de 01 a 04
    char Cidade2[50]; // Nome da cidade
    int População2; //Números de habitantes
    float Área2; // Área da cidade em quilômetros quadrados
    float PIB2; // Produto interno bruto da cidade
    int Números_de_pontos_turistícos2; // Quantidade de pontos turísticos na cidade

  // Área para entrada de dados carta 1
    printf("Digite a inicial do Estado da carta 01(A - H): ");
    scanf(" %c", &Estado1);
    printf("Digite o código da carta: ");
    scanf(" %s", Código_carta1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade1);
    printf("Digite o número de habitantes: ");
    scanf(" %d", &População1);
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf(" %f", &Área1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Números_de_pontos_turistícos1);

   // Área para entrada de dados carta 2
    printf("\nDigite a inicial do Estado da carta 02(A - H): ");
    scanf(" %c", &Estado2);
    printf("Digite o código da carta: ");
    scanf(" %s", Código_carta2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade2);
    printf("Digite o número de habitantes: ");
    scanf("%d", &População2);
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &Área2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Números_de_pontos_turistícos2);


  // Área para exibição dos dados da cidade da carta 1
     printf("\nCarta 1:\n");
     printf("Estado: %c\n", Estado1);
     printf("Código: %s\n", Código_carta1);
     printf("Nome da cidade: %s\n", Cidade1);
     printf("População: %d\n", População1);
     printf("Área: %.3f km²\n", Área1);
     printf("PIB: %.2f bilhões de reais\n", PIB1);
     printf("Número de pontos turísticos: %d\n", Números_de_pontos_turistícos1);

  // Área para exibição dos dados da cidade da carta 2
     printf("\nCarta 2:\n");
     printf("Estado: %c\n", Estado2);
     printf("Código: %s\n", Código_carta2);
     printf("Nome da cidade: %s\n", Cidade2);
     printf("População: %d\n", População2);
     printf("Área: %.3f km²\n", Área2);
     printf("PIB: %.2f bilhões de reais\n", PIB2);
     printf("Número de pontos turísticos: %d\n", Números_de_pontos_turistícos2);

return 0;
} 
