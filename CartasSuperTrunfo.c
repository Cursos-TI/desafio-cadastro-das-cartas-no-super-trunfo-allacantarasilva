#include <stdio.h>

int main(){

    char nome_cidade1[30];
    char nome_estado1[30];
    int populacao1, codigo1, pontos_turisticos1;
    float area1, pib1;

    char nome_cidade2[30];
    char nome_estado2[30];
    int populacao2, codigo2, pontos_turisticos2;
    float area2, pib2;
    


    printf("Desafio Super Trunfo\n");
    printf("Hora de cadastrar a primeira carta!: \n");

    printf("------------------------------------\n");

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo1);

    printf("Digite o nome do Estado: \n");
    scanf("%s", &nome_estado1);

    printf("Digite por favor o nome da cidade: \n");
    scanf(" %s", &nome_cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a area total em m²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Hora de cadastra a segunda carta: \n");

    //print("Codigo cidade: \n");
    //scanf("%d", &codigo2);


    printf("****Codigo Cidade: %d\n ", codigo1);
    printf("****Nome Estado: %s\n", nome_estado1);
    printf("****Nome cidade: %s\n", nome_cidade1);    
    printf("****População: %d\n", populacao1);
    printf("****Area total em m² %f\n", area1);
    printf("****Pib: %f\n", pib1);
    printf("****Pontos turisticos: %d\n", pontos_turisticos1);

    //print("****Codigo cidade: %d", codigo2);




    printf("-----------------Fim...--------------\n");

    









    return 0;

}