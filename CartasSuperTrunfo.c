#include <stdio.h>

int main(){

printf("Desafio Super Trunfo - Países\n");

printf("Cadastro das Cartas\n");

int população_1, população_2;                                                                  //Ex: População:12300000
int pontos_turisticos_1, pontos_turisticos_2;                                               // Ex: Pontos turisticos: 50
float área_1, área_2;                                                                         // Ex: Area:1521.11 km²
float pib_1, pib_2;                                                                         //Ex: 699.28 bilhões de reais
char estado_1[3], estado_2[3];                                                                 // Ex: "A"
char cidade_1[50], cidade_2[50];                                                              //Ex: "Belo Horizonte"
char código_1[10], código_2[10];                                                            // Ex: "A01"
float média, divisão;
float densidade_1, densidade_2;
float pib_per_capita_1, pib_per_capita_2;
float super_poder_1, super_poder_2;


//Entrada de Dados


printf("Estado: "); 
scanf("%c", &estado_1);

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


// Calcular Super Poder
super_poder_1 = (float)populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + pib_per_capita_1 + (1.0f / densidade_1);
super_poder_2 = (float)populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pib_per_capita_2 + (1.0f / densidade_2);

// Comparações e resultados (simples)
printf("Comparação de Cartas:\n\n");

printf("População: Carta 1 venceu (%d)\n", populacao_1 > populacao_2);
printf("Área: Carta 1 venceu (%d)\n", area_1 > area_2);
printf("PIB: Carta 1 venceu (%d)\n", pib_1 > pib_2);
printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos_1 > pontos_turisticos_2);
printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_1 < densidade_2); // menor vence
printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita_1 > pib_per_capita_2);
printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_1 > super_poder_2);

    return 0;

}


   

