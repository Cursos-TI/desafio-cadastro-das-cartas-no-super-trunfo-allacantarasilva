#include <stdio.h>

int main(){

    char nome_cidade[50];
    int populacao, codigo;
    float area;
    


    printf("Desafio Super Trunfo\n");
    printf("Vamos cadastrar as primeiras cartas?: \n");

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);

    printf("Digite por favor o nome da cidade: \n");
    scanf(" %s", nome_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a area total em m²: \n");
    scanf("%f", &area);

    printf("Codigo Cidade: %d\n ", codigo);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Area total em m² %f\n", area);



    printf("Fim...\n");

    









    return 0;

}