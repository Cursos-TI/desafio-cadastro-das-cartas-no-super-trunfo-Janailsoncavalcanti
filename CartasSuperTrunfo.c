#include <stdio.h>

int main(){

    // Defina variáveis separadas
    // Atributos das cartas: estado, código do estado, nome da cidade, população, área, PIB, número de pontos turístico

    // Carta 1

    char Estado1; // Primeira letra do Estado1
    char Código1[40]; // Código da carta
    char Cidade1[40]; // Nome da cidade
    int População1; // Quantidade da população
    float Área1; // Área da cidade em km
    float PIB1; // PIB da cidade1 em R$
    int PontosTuristicos1; // Quantidade de pontos turísticos

    // Carta 2

    char Estado2; // Prmeira letra do Estado2
    char Código2[40]; // Código da carta
    char Cidade2[40]; // Nome da cidade
    int População2; // Quantidade da população da cidade
    float Área2; // Área da cidade em km
    float PIB2; // PIB da cidade em R$
    int PontosTuristicos2; // Quantidade de pontos turísticos

    // Cadastrar as cartas
    // Utilizar scanf para as entradas do usuáros em cada atributo
    // Solicitar ao usuário que insira as informações de cada atributo

    // Carta 1

    printf("digite a primeira letra do estado1: \n");
    scanf("%c", &Estado1);

    printf("Digite o código do estado: \n");
    scanf("%s", &Código1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite a quantidade da população da cidade: \n");
    scanf("%d", &População1);

    printf("Digite a Área da cidade: \n");
    scanf("%f", Área1);

    printf("Digie o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos1);

    // Carta 2

    printf("Digite a primiera letra do estado2: \n");
    scanf("%c", &Estado2);

    printf("Digite o código do estado: \n");
    scanf("%s", &Código2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite a quantidade da população: \n");
    scanf("%d", &População2);

    printf("Digite a área da cidae: \n");
    scanf("%f", &Área2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos2);


    // Exibição dos dados das cartas 1 e 2
    // Printf para exibir as informações das cartas
    // Exibir os valores de cada carta por linha usando \n


    // Carta 1

    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Código1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %d \n", População1);
    printf("Área: %f \n", Área1);
    printf("PIB: %f \n", PIB1);
    printf("Pontos Turísticos: %d \n", PontosTuristicos1);


    // Carta 2

    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Código2);
    printf("Cidade: %s \n", Cidade2);
    printf("População: %d \n", População2);
    printf("Área: %f \n", Área2);
    printf("PIB: %f \n", PIB2);
    printf("Pontos Turísticos: %d \n", PontosTuristicos2);


    return 0;
    
}
