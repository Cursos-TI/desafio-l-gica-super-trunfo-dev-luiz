#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[30], codigo[30], cidade[30];
  int pontosTuristicos;
  unsigned int populacao;
  float area, pib, densidadePop, pibCapta, superPoder;

  //Área para definificação das variáveis que irão armazenar os valores da Carta 01
  int c1PontosTuristicos;
  unsigned int c1Populacao;
  float c1Area, c1Pib, c1DensidadePop, c1PibCapta, c1SuperPoder;

  //Introdução do sistema
  printf("***** BEM VINDO AO SUPER TRUNFO! *****\n");
  printf("\n-> Vamos realizar o cadastro da PRIMEIRA carta\n");
  printf("-> Insira as informações de acordo com o que for solicitado\n-> Observação: não utilize separadores como '.' ou ',' ao inserir os valores numérios\n");

  // Área para entrada de dados da PRIMEIRA carta
  // Variáveis do tipo string
  printf("\n**** CARTA 01 ****");
  printf("\nDigite o nome da cidade: ");
  scanf("%s", &cidade);
  printf("\nDigite o nome do estado: ");
  scanf("%s", &estado);
  printf("\nDigite o código da cidade: ");
  scanf("%s", &codigo);

  // Variáveis de valor inteiro
  printf("\nQual a população total da cidade? ");
  scanf("%d", &populacao);
  c1Populacao = populacao;
  printf("\nQuantos pontos turísticos há no local? ");
  scanf("%d", &pontosTuristicos);
  c1PontosTuristicos = pontosTuristicos;

  // Variáveis de valor flutuante
  printf("\nQual a área total da cidade? ");
  scanf("%f", &area);
  c1Area = area;
  printf("\nQual o Produto Interno Bruto (PIB)? ");
  scanf("%f", &pib);
  c1Pib = pib;

  //Cálculo da densidade demográfica da PRIMEIRA cidade
  densidadePop = (float) area / populacao;
  c1DensidadePop = densidadePop;

  //Cálculo do PIB per capta da PRIMEIRA cidade
  pibCapta = (float) pib / populacao;
  c1PibCapta = pibCapta;

  //Cálculo do Super Poder da PRIMEIRA cidade
  c1SuperPoder = (float) c1Populacao + c1Area + c1Pib + c1PontosTuristicos + c1PibCapta - c1DensidadePop;

  // Área para exibição dos dados da PRIMEIRA cidade
  printf("\n**** ATENÇÃO: Primeira carta criada com SUCESSO! ****\n");
  printf("\nCARTA 01: %s", cidade);
  printf("\nEstado: %s", estado);
  printf("\nCódigo: %s", codigo);
  printf("\nÁrea total (km²): %.2f", area);
  printf("\nPopulação total: %d", populacao);
  printf("\nPontos turísticos: %i", pontosTuristicos);
  printf("\nProduto Interno Bruto (PIB): R$%.2f", pib);
  printf("\nDensidade demográfica: %.2f habitantes por km²", densidadePop);
  printf("\nPIB per capta: R$%.2f\n", pibCapta);
  printf("\nSuper Poder: %.2f", c1SuperPoder);

  // Área para entrada de dados da SEGUNDA carta
  // Variáveis do tipo string
  printf("\nVamos realizar agora o cadastro da SEGUNDA carta");
  printf("\nLembre-se de inserir os dados de acordo com o que for solicitado!\n");
  printf("\n**** CARTA 02 ****");
  printf("\nDigite o nome da cidade: ");
  scanf("%s", &cidade);
  printf("\nDigite o nome do estado: ");
  scanf("%s", &estado);
  printf("\nDigite o código da cidade: ");
  scanf("%s", &codigo);

  // Variáveis de valor inteiro
  printf("\nQual a população total da cidade? ");
  scanf("%d", &populacao);
  printf("\nQuantos pontos turísticos há no local? ");
  scanf("%d", &pontosTuristicos);

  // Variáveis de valor flutuante
  printf("\nQual a área total da cidade? ");
  scanf("%f", &area);
  printf("\nQual o Produto Interno Bruto (PIB)? ");
  scanf("%f", &pib);

  //Cálculo da densidade demográfica da SEGUNDA cidade
  densidadePop = (float) area / populacao;

  //Cálculo do PIB per capta da SEGUNDA cidade
  pibCapta = (float) pib / populacao;

  //Cálculo do Super Poder da Carta 02
  superPoder = (float) populacao + area + pib + pontosTuristicos + pibCapta - densidadePop;

  // Área para exibição dos dados da SEGUNDA cidade
  printf("\n**** ATENÇÃO: Segunda carta criada com SUCESSO! ****");
  printf("\nCARTA 02: %s", cidade);
  printf("\nEstado: %s", estado);
  printf("\nCódigo: %s", codigo);
  printf("\nÁrea total (km²): %.2f", area);
  printf("\nPopulação total: %d", populacao);
  printf("\nPontos turísticos: %i", pontosTuristicos);
  printf("\nProduto Interno Bruto (PIB): R$%.2f", pib);
  printf("\nDensidade demográfica: %.2f habitantes por km²", densidadePop);
  printf("\nPIB per capta: R$%.2f\n", pibCapta);
  printf("\nSuper Poder: %.2f", superPoder);


  printf("\nCADASTROS FINALIZADOS!\nObrigado!\n\n.\n.\n.\n ***** RESULTADOS *****\n***** Comparação de Cartas *****\n");
  printf("\nAtributo: Super Poder\n");

  printf("\nCarta 01: %.2f", c1SuperPoder);
  printf("\nCarta 02: %.2f", superPoder);
  
  if(c1SuperPoder > superPoder){
    printf("\nCarta 01 venceu!\n");
  }else{
    printf("\nCarta 02 venceu!\n.\n.\n");
  }

return 0;
} 