#include <stdio.h>
int main(){

    printf(" Desafio supertrunfo\n");
    printf(" Novo commit\n");

    char estado[30];
    char codigo[40];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Digite o estado: ");
    scanf("%s", estado);
// O estado é uma string, então usamos %s para ler a string 
    printf("Digite o codigo: ");
    scanf("%s", codigo);
// O codigo é uma string, então usamos letra e número para ler a string como %s 
    printf("Digite a cidade: ");
    scanf("%s", cidade);
// O nome da cidade é uma string, então usamos %s para ler a string também 
    printf("Digite a populacao: ");
    scanf("%d", &populacao);
// A populacao é um inteiro, então usamos %d para ler o inteiro 
    printf("Digite a area: ");
    scanf("%f", &area);
// A area é um float, então usamos %f para ler o float 
    printf("Digite o pib: ");
    scanf("%f", &pib);
// O pib é um float, então usamos %f para ler o float também 
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos); 
// O numero de pontos turisticos é um inteiro, então usamos %d para ler o inteiro 
}
