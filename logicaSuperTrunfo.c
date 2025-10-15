#include <stdio.h>
#include <stdlib.h>
// Desafio Super Trunfo - Países
// Intermediário

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char pais[30], codigo[30];
  int pontosTuristicos;
  unsigned int populacao;
  float area, pib, densidadePop, pibCapta, superPoder;

  //Área para definificação das variáveis que irão armazenar os valores da Carta 01
  char c1Pais[30], c1Codigo[30];
  int c1PontosTuristicos;
  unsigned int c1Populacao;
  float c1Area, c1Pib, c1DensidadePop, c1PibCapta, c1SuperPoder;

  //Área para definição das variáveis utilizadas nos menus
  int opcaoMenuInicial, opcaoMenuComparacao, opcaoMenuComparacao2;
  float resultadoCarta1, resultadoCarta2;

  //Introdução do sistema
  printf("***** BEM VINDO AO SUPER TRUNFO! *****\n");
  printf("\n***** M E N U *****");
  printf("\n1 - JOGAR");
  printf("\n2 - INSTRUÇÕES");
  printf("\n3 - SAIR DO JOGO");
  printf("\nEscolha uma opção: ");
  scanf("%d", &opcaoMenuInicial);

  switch (opcaoMenuInicial)
  {
  case 1:
    printf("\n-> Vamos realizar o cadastro da PRIMEIRA carta\n");
  
    // Área para entrada de dados da PRIMEIRA carta
    // Variáveis do tipo string
    printf("\n**** CARTA 01 ****");
    printf("\nDigite o nome do País: ");
    scanf("%s", &c1Pais);
    printf("\nDigite o código do país: ");
    scanf("%s", &c1Codigo);

    // Variáveis de valor inteiro
    printf("\nQual a população total do País? ");
    scanf("%d", &c1Populacao);
    printf("\nQuantos pontos turísticos há no local? ");
    scanf("%d", &c1PontosTuristicos);

    // Variáveis de valor flutuante
    printf("\nQual a área total do(a) %s? ", c1Pais);
    scanf("%f", &c1Area);
    printf("\nQual o Produto Interno Bruto (PIB)? ");
    scanf("%f", &c1Pib);

    //Cálculo da densidade demográfica da PRIMEIRA cidade
    c1DensidadePop= (float) c1Area / c1Populacao;

    //Cálculo do PIB per capta da PRIMEIRA cidade
    c1PibCapta = (float) c1Pib / c1Populacao;

    //Cálculo do Super Poder da PRIMEIRA cidade
    c1SuperPoder = (float) c1Populacao + c1Area + c1Pib + c1PontosTuristicos + c1PibCapta - c1DensidadePop;

    // Área para exibição dos dados da PRIMEIRA cidade
    printf("\n**** ATENÇÃO: Primeira carta criada com SUCESSO! ****\n");
    printf("\nCARTA 01: %s", c1Pais);
    printf("\nCódigo: %s", c1Codigo);
    printf("\nÁrea total (km²): %.2f", c1Area);
    printf("\nPopulação total: %d", c1Populacao);
    printf("\nPontos turísticos: %i", c1PontosTuristicos);
    printf("\nProduto Interno Bruto (PIB): R$%.2f", c1Pib);
    printf("\nDensidade demográfica: %.2f habitantes por km²", c1DensidadePop);
    printf("\nPIB per capta: R$%.2f", c1PibCapta);
    printf("\nSuper Poder: %.2f\n", c1SuperPoder);

    // Área para entrada de dados da SEGUNDA carta
    // Variáveis do tipo string
    printf("\nVamos realizar agora o cadastro da SEGUNDA carta");
    printf("\nLembre-se de inserir os dados de acordo com o que for solicitado!\n");
    printf("\n**** CARTA 02 ****");
    printf("\nDigite o nome do país: ");
    scanf("%s", &pais);
    printf("\nDigite o código do país: ");
    scanf("%s", &codigo);

    // Variáveis de valor inteiro
    printf("\nQual a população total do país? ");
    scanf("%d", &populacao);
    printf("\nQuantos pontos turísticos há no local? ");
    scanf("%d", &pontosTuristicos);

    // Variáveis de valor flutuante
    printf("\nQual a área total do(a) %s? ", pais);
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
    printf("\nCARTA 02: %s", pais);
    printf("\nCódigo: %s", codigo);
    printf("\nÁrea total (km²): %.2f", area);
    printf("\nPopulação total: %d", populacao);
    printf("\nPontos turísticos: %i", pontosTuristicos);
    printf("\nProduto Interno Bruto (PIB): R$%.2f", pib);
    printf("\nDensidade demográfica: %.2f habitantes por km²", densidadePop);
    printf("\nPIB per capta: R$%.2f", pibCapta);
    printf("\nSuper Poder: %.2f\n", superPoder);


    printf("\nCADASTROS FINALIZADOS!\n");
    printf("A T E N Ç Ã O");
    printf("\n[1] -> Área Total");
    printf("\n[2] -> População Total");
    printf("\n[3] -> Pontos Turísticos");
    printf("\n[4] -> Produto Interno Bruto (PIB)");
    printf("\n[5] -> Densidade Demográfica");
    printf("\n[6] -> PIB per Capta");
    printf("\n[7] -> Super Poder");
    printf("\nEscolha o **PRIMEIRO** atributo que deseja usar para comparar: ");
    scanf("%d", &opcaoMenuComparacao);

    switch (opcaoMenuComparacao)
    {
    case 1:
      resultadoCarta1 = c1Area;
      resultadoCarta2 = area;
    break;
    case 2:
      resultadoCarta1 = c1Populacao;
      resultadoCarta2 = populacao;
    break;
    case 3:
      resultadoCarta1 = (float) c1PontosTuristicos;
      resultadoCarta2 = (float) pontosTuristicos;
    break;
    case 4:
      resultadoCarta1 = c1Pib;
      resultadoCarta2 = pib;
    break;
    case 5:
      resultadoCarta1 = resultadoCarta1 - c1DensidadePop;
      resultadoCarta2 = resultadoCarta2 - densidadePop;
    break;
    case 6:
      resultadoCarta1 = c1PibCapta;
      resultadoCarta2 = pibCapta;
    break;
    case 7:
      resultadoCarta1 = c1SuperPoder;
      resultadoCarta2 = superPoder;
    break;
    default:
      printf("\nOpção inválida!\n");
    break;
    }

    printf("A T E N Ç Ã O");
    printf("\n[1] -> Área Total");
    printf("\n[2] -> População Total");
    printf("\n[3] -> Pontos Turísticos");
    printf("\n[4] -> Produto Interno Bruto (PIB)");
    printf("\n[5] -> Densidade Demográfica");
    printf("\n[6] -> PIB per Capta");
    printf("\n[7] -> Super Poder");
    printf("\nEscolha o **SEGUNDO** atributo que deseja usar para comparar: ");
    scanf("%d", &opcaoMenuComparacao2);

    switch (opcaoMenuComparacao2)
    {
    opcaoMenuComparacao2 == opcaoMenuComparacao ? printf("\nATENÇÃO: Você selecionou o mesmo atributo duas vezes!") : printf("\nAtributos selecionados!\n");
    case 1:
      resultadoCarta1 = resultadoCarta1 + c1Area;
      resultadoCarta2 = resultadoCarta2 + area;
    break;
    case 2:
      resultadoCarta1 = resultadoCarta1 + c1Populacao;
      resultadoCarta2 = resultadoCarta2 + populacao;
    break;
    case 3:
      resultadoCarta1 = (float) resultadoCarta1 + c1PontosTuristicos;
      resultadoCarta2 = (float) resultadoCarta2 + pontosTuristicos;
    break;
    case 4:
      resultadoCarta1 = resultadoCarta1 + c1Pib;
      resultadoCarta2 = resultadoCarta2 + pib;
    break;
    case 5:
      resultadoCarta1 = resultadoCarta1 - c1DensidadePop;
      resultadoCarta2 = resultadoCarta2 - densidadePop;
    break;
    case 6:
      resultadoCarta1 = resultadoCarta1 + c1PibCapta;
      resultadoCarta2 = resultadoCarta2 + pibCapta;
    break;
    case 7:
      resultadoCarta1 = resultadoCarta1 + c1SuperPoder;
      resultadoCarta2 = resultadoCarta2 + superPoder;
    break;
    default:
      printf("\nOpção inválida!\n");
    break;
    }

    //Tela final dos resultados
    printf("\n***** R E S U L T A D O S *****");
    printf("\nPrimeiro atributo selecionado: ");

    switch (opcaoMenuComparacao)
    {
    case 1:
      printf("\nÁrea Total de [%s]: %.2f", c1Pais, c1Area);
      printf("\nÁrea Total de [%s]: %.2f", pais, area);
    break;
    case 2:
      printf("\nPopulação Total de [%s]: %.2f", c1Pais, c1Populacao);
      printf("\nPopulação Total de [%s]: %.2f", pais, populacao);
    break;
    case 3:
      printf("\nPontos Turísticos de [%s]: %d", c1Pais, c1PontosTuristicos);
      printf("\nPontos Turísticos de [%s]: %d", pais, pontosTuristicos);
    break;
    case 4:
      printf("\nPIB de [%s]: %.2f", c1Pais, c1Pib);
      printf("\nPIB de [%s]: %.2f", pais, pib);
    break;
    case 5:
      printf("\nDensidade Demográfica de [%s]: %.2f", c1Pais, c1DensidadePop);
      printf("\nDensidade Demográfica [%s]: %.2f", pais, densidadePop);
    break;
    case 6:
      printf("\nPIB per capta de [%s]: %.2f", c1Pais, c1PibCapta);
      printf("\nPIB per capta de [%s]: %.2f", pais, pibCapta);
    break;
    case 7:
      printf("\nSuper Poder de [%s]: %.2f", c1Pais, c1SuperPoder);
      printf("\nSuper Poder de [%s]: %.2f", pais, superPoder);
    break;    
    default:
      printf("\nErro!");
    break;
    }

    printf("\nSegundo Atributo Selecionado:");
    switch (opcaoMenuComparacao2)
    {
    case 1:
      printf("\nÁrea Total de [%s]: %.2f", c1Pais, c1Area);
      printf("\nÁrea Total de [%s]: %.2f", pais, area);
    break;
    case 2:
      printf("\nPopulação Total de [%s]: %.2f", c1Pais, c1Populacao);
      printf("\nPopulação Total de [%s]: %.2f", pais, populacao);
    break;
    case 3:
      printf("\nPontos Turísticos de [%s]: %d", c1Pais, c1PontosTuristicos);
      printf("\nPontos Turísticos de [%s]: %d", pais, pontosTuristicos);
    break;
    case 4:
      printf("\nProduto Interno Bruto de [%s]: %.2f", c1Pais, c1Pib);
      printf("\nProduto Interno Bruto de [%s]: %.2f", pais, pib);
    break;
    case 5:
      printf("\nDensidade Populacional de [%s]: %.2f", c1Pais, c1DensidadePop);
      printf("\nDensidade Populacional de [%s]: %.2f", pais, densidadePop);
    break;
    case 6:
      printf("\nPIB per capta de [%s]: %.2f", c1Pais, c1PibCapta);
      printf("\nPIB per capta de [%s]: %.2f", pais, pibCapta);
    break;
    case 7:
      printf("\nSuper Poder de [%s]: %.2f", c1Pais, c1SuperPoder);
      printf("\nSuper Poder de [%s]: %.2f", pais, superPoder);
    break;    
    default:
      printf("\nErro!");
    break;
    }
    printf("\nSomando os dois atributos...");
    printf("\nA Carta 01 pontuou no total: %.2f", resultadoCarta1);
    printf("\nA Carta 02 pontuou no total: %.2f", resultadoCarta2);

    //Calcula o vencedor
    if(resultadoCarta1 > resultadoCarta2){
      printf("\nO vencedor é a Carta 01 [%s] com %.2f pontos", c1Pais, resultadoCarta1);
    }else if(resultadoCarta1 == resultadoCarta2){
      printf("\nFoi um empate! Ambos países %s e %s somaram %.2f", c1Pais, pais, resultadoCarta1);
    }else{
      printf("\nO vencedor é a Carta 02 [%s] com %2.f pontos", pais, resultadoCarta2);
    }
    break;
  case 2:
    printf("-> Insira as informações de acordo com o que for solicitado\n-> Não utilize separadores como '.' ou ',' ao inserir os valores numéricos\n");
    printf("-> Realize o cadastro das duas cartas\n-> Depois selecione dois atributos que serão somados e utilizados na comparação\n-> Não selecione o esmo atributo duas vezes\n-> Veja o resultado final da carta vencedora\n.\n-> Boa sorte!\n.\n");
    break;
  case 3:
    printf("Saindo do jogo... Até breve!\n.\n");
    break;
  default:
    printf("Opção inválida!\n.\n");
    break;
  }

return 0;
} 