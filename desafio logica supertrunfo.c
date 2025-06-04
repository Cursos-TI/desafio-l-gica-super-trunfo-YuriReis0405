#include <stdio.h>

int main() {
  // === Dados da Carta 1 ===
  char estado1[50], codigo1[20], cidade1[50];
  long int populacao1;
  float area1, PIB1;
  int turisticos1;

  printf("CARTA 1\n");
  printf("Digite o estado: ");
  scanf(" %s", estado1);

  printf("Digite o código: ");
  scanf(" %s", codigo1);

  printf("Digite o nome da cidade: ");
  scanf(" %s", cidade1);

  printf("Digite a população: ");
  scanf(" %ld", &populacao1);

  printf("Digite a área (em km²): ");
  scanf(" %f", &area1);

  printf("Digite o PIB (em bilhões): ");
  scanf(" %f", &PIB1);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf(" %d", &turisticos1);

  float densidade1 = populacao1 / area1;
  float pibPerCapita1 = PIB1 * 1000000000 / populacao1; // Convertendo bilhões para reais por pessoa

  // === Dados da Carta 2 ===
  char estado2[50], codigo2[20], cidade2[50];
  long int populacao2;
  float area2, PIB2;
  int turisticos2;

  printf("\nCARTA 2\n");
  printf("Digite o estado: ");
  scanf(" %s", estado2);

  printf("Digite o código: ");
  scanf(" %s", codigo2);

  printf("Digite o nome da cidade: ");
  scanf(" %s", cidade2);

  printf("Digite a população: ");
  scanf(" %ld", &populacao2);

  printf("Digite a área (em km²): ");
  scanf(" %f", &area2);

  printf("Digite o PIB (em bilhões): ");
  scanf(" %f", &PIB2);

  printf("Digite a quantidade de pontos turísticos: ");
  scanf(" %d", &turisticos2);

  float densidade2 = populacao2 / area2;
  float pibPerCapita2 = PIB2 * 1000000000 / populacao2;

  // === Comparações ===
  printf("\n==============================\n");
  printf("RESULTADOS DAS COMPARAÇÕES:\n");

  printf("População: Carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
  printf("Área: Carta %d venceu\n", area1 > area2 ? 1 : 2);
  printf("PIB: Carta %d venceu\n", PIB1 > PIB2 ? 1 : 2);
  printf("Pontos Turísticos: Carta %d venceu\n", turisticos1 > turisticos2 ? 1 : 2);
  printf("Densidade Populacional (menor vence): Carta %d venceu\n", densidade1 < densidade2 ? 1 : 2);
  printf("PIB per Capita: Carta %d venceu\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2);

  float superPoder1 = populacao1 + area1 + (PIB1 * 1000) + turisticos1 + pibPerCapita1 / 1000;
  float superPoder2 = populacao2 + area2 + (PIB2 * 1000) + turisticos2 + pibPerCapita2 / 1000;

  printf("Super Poder: Carta %d venceu\n", superPoder1 > superPoder2 ? 1 : 2);

  printf("==============================\n");

  return 0;
}
