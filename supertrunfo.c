#include <stdio.h>

int main(){
    char estado;
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int quantidade;

    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int quantidade2;

    //AGORA COMEÇA O CÓDIGO
    printf("--Escolha as informações da CARTA 1--\n");
    printf("\nDigite uma letra de 'A' a 'H' para representar um Estado: ");
    scanf(" %c", &estado);

     printf("Digite um código para representar o Estado (Ex:A01): ");
    scanf(" %s", codigo);

    printf("Digite um nome para a cidade: ");
    scanf(" %s", cidade);

    printf("Digite um valor para a população da cidade: ");
    scanf(" %d", &populacao);

    printf("Informe um valor da área dessa cidade em Km²: ");
    scanf(" %f", &area);

    printf("Informe o produto interno bruto: ");
    scanf(" %f", &PIB);

    printf("Diga a quantidade de pontos turísticos: ");
    scanf(" %d", &quantidade); 
    
    //AGORA RETORNA A CARTA 1

    printf("\nCARTA 1:\n");
    
    printf("Estado: %c\n", estado);

    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\n", cidade);

    printf("População: %d pessoas\n", populacao);

    printf("Área: %.2f km²\n", area);

    printf("PIB: %.2f \n", PIB);

    printf("Pontos turísticos: %d pontos turísticos\n", quantidade);


    //AGORA COMEÇA O CÓDIGO DA 2 CARTA
    
    printf("\n--Escolha as informações da CARTA 2--\n");
    printf("\nDigite uma letra de 'A' a 'H' para representar um Estado: ");
    scanf(" %c", &estado2);

     printf("Digite um código para representar o Estado (Ex:A01): ");
    scanf(" %s", codigo2);

    printf("Digite um nome para a cidade: ");
    scanf(" %s", cidade2);

    printf("Digite um valor para a população da cidade: ");
    scanf(" %d", &populacao2);

    printf("Informe um valor da área dessa cidade em Km²: ");
    scanf(" %f", &area2);

    printf("Informe o produto interno bruto: ");
    scanf(" %f", &PIB2);

    printf("Diga a quantidade de pontos turísticos: ");
    scanf(" %d", &quantidade2); 
    
    //AGORA RETORNA A CARTA 2

    printf("\nCARTA 2:\n");
    
    printf("Estado: %c\n", estado2);

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %d pessoas\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: %.2f \n", PIB2);

    printf("Pontos turísticos: %d pontos turísticos\n", quantidade2);

    return 0;

}
