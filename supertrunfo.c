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

    //AGORA COMEÇA O DÓIGO
    
    printf("Digite uma letra para representar um Estado: ");
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
    
    //AGORA RETORNA A CARTA 

    printf("CARTA 1:\n");
    
    printf("Estado: %c\n", estado2);

    printf("codigo: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %d\n pessoas", populacao2);

    printf("Área: %.2f\n km²", area2);

    printf("PIB: %.2f\n bilhões ", PIB2);

    printf("pontos turísticos: %d\n pontos turísticos", quantidade2);

    return 0;

}
