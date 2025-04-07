#include<stdio.h>

int main(){

    char ceara[50], a01[50], fortaleza[50], são_Paulo[50], a02[50], santos[50];
    int populacao, pontos, populacao2, pontos2;
    float pib, km1, pib2, km2;

    printf("Digite seu estado: \n");
    scanf("%s", &ceara);
    printf("Digite sua cidade:\n");
    scanf("%s",&fortaleza);
    printf("Digite o código de sua carta: \n");
    scanf("%s", &a01);

    printf("Digite a população de sua cidade:\n");
    scanf("%d", &populacao);
    printf("Agora insira a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    printf("Por fim a área em KM²: \n");
    scanf("%f", &km1);

    printf("Nome do estado: %s - Cidade: %s\n", ceara , fortaleza);
    printf("Código da carta: %s - Pontos turisticos: %d \n", a01, pontos);
    printf("PIB: %f - Área: %f \n", pib, km1);

    printf("Carta Cadastrada!\n");
    printf("Vamos para a segunda carta: \n");

    printf("Digite seu estado: \n");
    scanf("%s", &são_Paulo);
    printf("Digite sua cidade: \n");
    scanf("%s",&santos);
    printf("Digite o código de sua carta: \n");
    scanf("%s", &a02);

    printf("Digite a população de sua cidade:\n");
    scanf("%d", &populacao2);
    printf("Agora insira a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Por fim a área em KM²: \n");
    scanf("%f", &km2);

    printf("Nome do estado: %s - Cidade: %s\n", são_Paulo , santos);
    printf("Código da carta: %s - Pontos turisticos: %d \n", a02, pontos2);
    printf("PIB: %f - Área: %f \n", pib2, km2);

    printf("Carta Cadastrada!\n");
    printf("Obrigado por jogar.\n");

    printf("As cartas cadastradas foram:\n");
    printf("Ceará e São Paulo");

    return 0;
}