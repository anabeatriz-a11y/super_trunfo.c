int main() {
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int numeroDePontosTuristicos1, numeroDePontosTuristicos2;

    printf ("CARTA 1 \n");
    printf("escreva uma letra de A a H: ");
    scanf ( " %c", &estado1);
    printf ("escreva o codigo: ");
    scanf ( " %s", &codigo1);
    printf ("Nome Da Cidade: ");
    scanf (" %s", &nome1);
    printf ("populacao: ");
    scanf (" %d", &populacao1);
    printf ("PIB: ");
    scanf (" %f", &PIB1);
    printf ("Numeros De Pontos Turisticos: ");
    scanf (" %d", &numeroDePontosTuristicos1);
    printf ("Estado: %c \n Codigo: %s \n Nome da cidade: %s \n População: %d \n PIB: %f \n Numeros de pontos turisticos: %d \n", estado1, codigo1, nome1, populacao1, PIB1, numeroDePontosTuristicos1);

    printf ("CARTA 2 \n");
    printf("escreva uma letra de A a H: ");
    scanf ( " %c", &estado1);
    printf ("escreva o codigo: ");
    scanf ( " %s", &codigo2);
    printf ("Nome Da Cidade: ");
    scanf (" %s", &nome2);
    printf ("populacao: ");
    scanf (" %d", &populacao2);
    printf ("PIB: ");
    scanf (" %f", &PIB2);
    printf ("Numeros De Pontos Turisticos: ");
    scanf (" %d", &numeroDePontosTuristicos2);
    printf ("Estado: %c \n Codigo: %s \n Nome da cidade: %s \n População: %d \n PIB: %f \n Numeros de pontos turisticos: %d \n", estado2, codigo2, nome2, populacao2, PIB2, numeroDePontosTuristicos2);

    return 0;
}
