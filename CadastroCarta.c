#include <stdio.h>

int main () {

  //Variáveis
  char estado1[20], estado2[20], cod_Carta1[3],cod_Carta2[3],nome_cidade1[20],nome_cidade2[20];
  int populacao1, populacao2, num_p_turs1,num_p_turs2;
  float areak1, areak2, pib1, pib2;

  //Inicio do programa

  printf("Bem vindos!\n");
  printf("Vamos comecar o cadastramentos das cartas trunfos.\n");
  
  
  //Inicio do cadastro carta 1

  printf("Carta 1 :\n");
  

  printf("Estado:");
  fgets( estado1, sizeof(estado1),stdin);


  printf("Codigo: ");
  scanf("%s", &cod_Carta1);
  getchar();

  printf("Nome da Cidade: ");
  fgets( nome_cidade1, sizeof(nome_cidade1),stdin);

  printf("População da Cidade: ");
  scanf("%d", &populacao1);

  printf("Area em Kilimentros quadrados:");
  scanf("%f", &areak1);

  printf("PIB: ");
  scanf("%f", &pib1);
  getchar();

  printf("Numeros de pontos turisticos: ");
  scanf("%d", &num_p_turs1);

  printf("\nCadastro da Carta 1 concluido!\n");
  getchar();

  //Exibindo informações Carta 1
  
  printf("Carta 1:\n");
  printf("Estado: %s", estado1);
  printf("Codigo: %s\n", cod_Carta1);
  printf("Nome da Cidade: %s", nome_cidade1);
  printf("População de: %d Habitantes\n", populacao1);
  printf("Area de: %.2f Km²\n", areak1);
  printf("PIB: %.2f Bilhoes de Reais\n", pib1);
  printf("Numero de pontos Turisticos: %d\n", num_p_turs1);

   //Inicio do cadastro carta 2

   printf("Carta 2 :\n");
  

   printf("Estado:");
   fgets( estado2, sizeof(estado2),stdin);
 
 
   printf("Codigo: ");
   scanf("%s", &cod_Carta2);
   getchar();
 
   printf("Nome da Cidade: ");
   fgets( nome_cidade2, sizeof(nome_cidade2),stdin);
 
   printf("População da Cidade: ");
   scanf("%d", &populacao2);
 
   printf("Area em Kilimentros quadrados:");
   scanf("%f", &areak2);
 
   printf("PIB: ");
   scanf("%f", &pib2);
   getchar();
 
   printf("Numeros de pontos turisticos: ");
   scanf("%d", &num_p_turs2);
 
   printf("\nCadastro da Carta 1 concluido!\n");
   getchar();
 
   //Exibindo informações Carta 2

   printf("Carta 2:\n");
   printf("Estado: %s", estado2);
   printf("Codigo: %s\n", cod_Carta2);
   printf("Nome da Cidade: %s", nome_cidade2);
   printf("População de: %d Habitantes\n", populacao2);
   printf("Area de: %.2f Km²\n", areak2);
   printf("PIB: %.2f Bilhoes de Reais\n", pib2);
   printf("Numero de pontos Turisticos: %d\n", num_p_turs2);

  return 0;
}