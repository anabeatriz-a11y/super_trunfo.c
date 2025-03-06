#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    float area1, area2;
    int populacao1, populacao2;
    float PIB1, PIB2;
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;

    printf("CARTA 1\n");
    printf("escreva uma letra de A a H: \n");
    scanf(" %c", &estado1);
    

    printf("escreva o codigo: \n");
    scanf(" %3s", codigo1);
    
    printf("Nome Da Cidade: \n");
    scanf(" %s", nome1);
    

    printf("Escreva a area: \n");
    scanf(" %f", &area1);
    

    printf("populacao: \n");
    scanf(" %d", &populacao1);
    

    printf("Escreva o PIB: \n");
    scanf(" %f", &PIB1);
    

    printf("Numeros De Pontos Turisticos: \n");
    scanf(" %d", &numeroDePontosTuristicos1);
    

    float pibpercapita1 = PIB1 / populacao1;
    float densidade1 = populacao1 / area1;

    printf("Estado: %c \n Codigo: %s \n Nome da cidade: %s \n Populacao: %d \n Area: %.3f km² \n PIB: %.3f \n Numeros de pontos turisticos: %d \n PIB Per Capita: %.3f \n Densidade Demografica: %.3f \n", estado1, codigo1, nome1, populacao1, area1, PIB1, numeroDePontosTuristicos1, pibpercapita1, densidade1);

    printf("\nCARTA 2\n");
    printf("escreva uma letra de A a H: \n");
    scanf(" %c", &estado2);
    
    printf("escreva o codigo: \n");
    scanf(" %3s", codigo2);
    

    printf("Nome Da Cidade: \n");
    scanf(" %s", nome2);
    
    printf("Escreva a area: \n");
    scanf(" %f", &area2);
    

    printf("populacao: \n");
    scanf(" %d", &populacao2);
    

    printf("Escreva o PIB: \n");
    scanf(" %f", &PIB2);
    

    printf("Numeros De Pontos Turisticos: \n");
    scanf(" %d", &numeroDePontosTuristicos2);
    

    float pibpercapita2 = PIB2 / populacao2;
    float densidade2 = populacao2 / area2;

    printf ("Estado: %c \n Codigo: %s \n Nome da cidade: %s \n População: %d \n Area: %.3f km² \n PIB: %.3f \n Numeros de pontos turisticos: %d \n PIB Per Capita: %.3f \n Densidade Demografica: %.3f \n", estado2, codigo2, nome2, populacao2, area2, PIB2, numeroDePontosTuristicos2, pibpercapita2, densidade2);

    return 0;
}
