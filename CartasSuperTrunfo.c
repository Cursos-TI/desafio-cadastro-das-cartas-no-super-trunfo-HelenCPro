#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));



printf("Desafio Super Trunfo - Países\n");

printf("Cadastro das Cartas\n");

unsigned long int população_1, população_2;                                                  //Ex: População:12300000
int pontos_turisticos_1, pontos_turisticos_2;                                               // Ex: Pontos turisticos: 50
float área_1, área_2;                                                                         // Ex: Area:1521.11 km²
float pib_1, pib_2; 
char Brasil, Argentina;                                                                        //Ex: 699.28 bilhões de reais
char estado_1[3], estado_2[3];                                                                 // Ex: "A"
char cidade_1[50], cidade_2[50];                                                              //Ex: "Belo Horizonte"
char código_1[10], código_2[10]; 
int escolhaJogador1, escolhaJogador2;                                                          // Ex: "A01"
float média, divisão;
float super_poder1, super_poder2;
float pib_per_capita_1, pib_per_capita_2;
float densidade_populacional1, densidade_populacional2;
float densidadedemografica1, densidadedemografica2;

//Carta 1
    printf("*** Jogo de Cartas ***\n");
    printf("Escolha um atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. PIB per Capita\n");
    printf("6. Super Poder\n");
    printf("7. Densidade Demográfica\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &escolhaJogador1);



    //Entrada de Dados


printf("País: Brasil\n"); 

printf("Estado: "); 
scanf("%s", &estado_1);

printf("Código: "); 
scanf("%s", &código_1);

printf("Nome da Cidade: "); 
scanf("%s", &cidade_1);

printf("População: "); 
scanf("%lu", &população_1);

printf("Área: (km) "); 
scanf("%f", &área_1);

printf("PIB: (bilhões) "); 
scanf("%f", &pib_1);

printf("Númeos de Pontos Turísticos: "); 
scanf("%d", &pontos_turisticos_1);


divisão = população_1 / área_1;
média = (pib_1 * 1000000000.0f) / população_1;


printf("Densidade Populacional (hab/km²): %.2f\n", divisão);
printf("Pib per Capita (reais): %.2f\n", média);


//Carta 2

printf("*** CARTA 2***\n");


printf("País: Argentina\n"); 

printf("Estado: "); 
scanf("%s", &estado_2);

printf("Código: "); 
scanf("%s", &código_2);

printf("Nome da Cidade: "); 
scanf("%s", &cidade_2);

printf("População: "); 
scanf("%lu", &população_2);

printf("Área: (km) "); 
scanf("%f", &área_2);

printf("PIB: (bilhões) "); 
scanf("%f", &pib_2);

printf("Númeos de Pontos Turísticos: "); 
scanf("%d", &pontos_turisticos_2);

divisão = (float)(população_2 / área_2);
média = (pib_2 * 1000000000.0f) / população_2;

printf("Densidade Populacional (hab/km²): %.2f\n", divisão);
printf("PIB per Capita (reais): %.2f\n", média);

    printf("\n======= Resultado da Comparação =======\n");
printf("Países: Brasil vs Argentina\n");

switch (escolhaJogador1) {
    case 1:
        printf("Atributo: População\n");
        printf("Brasil: %lu habitantes\n", população_1);
        printf("Argentina: %lu habitantes\n", população_2);
        if (população_1 > população_2)
            printf("Vencedora: Carta 1 (Brasil)\n");
        else if (população_1 < população_2)
            printf("Vencedora: Carta 2 (Argentina)\n");
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("Atributo: Área\n");
        printf("Brasil: %.2f km²\n", área_1);
        printf("Argentina: %.2f km²\n", área_2);
        if (área_1 > área_2)
            printf("Vencedora: Carta 1 (Brasil)\n");
        else if (área_1 < área_2)
            printf("Vencedora: Carta 2 (Argentina)\n");
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("Atributo: PIB\n");
        printf("Brasil: %.2f bilhões de reais\n", pib_1);
        printf("Argentina: %.2f bilhões de reais\n", pib_2);
        if (pib_1 > pib_2)
            printf("Vencedora: Carta 1 (Brasil)\n");
        else if (pib_1 < pib_2)
            printf("Vencedora: Carta 2 (Argentina)\n");
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Atributo: Pontos Turísticos\n");
        printf("Brasil: %d pontos\n", pontos_turisticos_1);
        printf("Argentina: %d pontos\n", pontos_turisticos_2);
        if (pontos_turisticos_1 > pontos_turisticos_2)
            printf("Vencedora: Carta 1 (Brasil)\n");
        else if (pontos_turisticos_1 < pontos_turisticos_2)
            printf("Vencedora: Carta 2 (Argentina)\n");
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Atributo: PIB per Capita\n");
        printf("Brasil: %.2f reais\n", pib_per_capita_1);
        printf("Argentina: %.2f reais\n", pib_per_capita_2);
        if (pib_per_capita_1 > pib_per_capita_2)
            printf("Vencedora: Carta 1 (Brasil)\n");
        else if (pib_per_capita_1 < pib_per_capita_2)
            printf("Vencedora: Carta 2 (Argentina)\n");
        else
            printf("Empate!\n");
        break;

    case 6:
        printf("Atributo: Super Poder\n");
        printf("Brasil: %.2f pontos\n", super_poder1);
        printf("Argentina: %.2f pontos\n", super_poder2);
        if (super_poder1 > super_poder2)
            printf("Vencedora: Carta 1 (Brasil)\n");
        else if (super_poder1 < super_poder2)
            printf("Vencedora: Carta 2 (Argentina)\n");
        else
            printf("Empate!\n");
        break;

    case 7:
        printf("Atributo: Densidade Demográfica (MENOR vence)\n");
        printf("Brasil: %.2f hab/km²\n", densidade_populacional1);
        printf("Argentina: %.2f hab/km²\n", densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2)
            printf("Vencedora: Carta 1 (Brasil)\n");
        else if (densidade_populacional1 > densidade_populacional2)
            printf("Vencedora: Carta 2 (Argentina)\n");
        else
            printf("Empate!\n");
        break;

    default:
        printf("Escolha inválida de atributo!\n");
        break;
}

printf("=======================================\n");


    
   return 0;

             }
            
    

