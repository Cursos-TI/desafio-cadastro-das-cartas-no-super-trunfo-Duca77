#include <stdio.h>
int main(){

    printf(" Desafio supertrunfo\n");
    printf(" Novo commit\n");
    
    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Digite o estado: ");
    scanf("%s", estado);
// O estado é uma string, então usamos %s para ler
    printf("Digite o codigo: ");
    scanf("%s", codigo);
// O codigo é uma string composta por letras e números, então usamos %s para ler
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
// O nome da cidade é uma string, então usamos %s para ler também 
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
// A populacao é um inteiro, então usamos %d para ler 
    printf("Digite a area: ");
    scanf("%f", &area);
// A area é um float, então usamos %f para ler 
    printf("Digite o pib: ");
    scanf("%f", &pib);
// O pib é um float, então usamos %f para ler também 
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
// O numero de pontos turisticos é um inteiro, então usamos %d para ler 

    return 0; 
}