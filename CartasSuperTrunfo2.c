#include <stdio.h>

int main(){

printf("Desafio Super Trunfo - Países\n");

printf("Cadastro das Cartas\n");

int população_1, população_2;                                                                //Ex: População:12300000
int pontos_turisticos_1, pontos_turisticos_2;                                                // Ex: Pontos turisticos: 50
float área_1, área_2;                                                                       // Ex: Area:1521.11 km²
float pib_1, pib_2;                                                                         //Ex: 699.28 bilhões de reais
char estado_1[3], estado_2[3];                                                               // Ex: "A"
char cidade_1[50], cidade_2[50];                                                             //Ex: "Belo Horizonte"
char código_1[10], código_2[10];                                                              // Ex: "A01"
float divisão;
float média;


//Entrada de Dados


printf("Estado: "); 
scanf("%s", &estado_1);

printf("Código: "); 
scanf("%s", &código_1);

printf("Nome da Cidade: "); 
scanf("%s", &cidade_1);

printf("População: "); 
scanf("%d", &população_1);

printf("Área: (km) "); 
scanf("%f", &área_1);

printf("PIB: (bilhões) "); 
scanf("%f", &pib_1);

printf("Númeos de Pontos Turísticos: "); 
scanf("%d", &pontos_turisticos_1);

printf(" Qual é a densidade populacional da carta 1?");
scanf("%f", divisão);

divisão = população_1 / área_1;


//Carta 2

printf("Estado: "); 
scanf("%s", &estado_2);

printf("Código: "); 
scanf("%s", &código_2);

printf("Nome da Cidade: "); 
scanf("%s", &cidade_2);

printf("População: "); 
scanf("%d", &população_2);

printf("Área: (km) "); 
scanf("%f", &área_2);

printf("PIB: (bilhões) "); 
scanf("%f", &pib_2);

printf("Númeos de Pontos Turísticos: "); 
scanf("%d", &pontos_turisticos_2);






return 0;


}


   

