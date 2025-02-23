#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    char Estado;
    char Codigo[10];
    char Cidade[20];
    float Populacao;
    float Area;
    float PIB;
    int Pontosturisticos;

    //Para a primeira carta foram utilizados como dados de teste os dados da cidade de Brasilia.

    printf ("Primeira Carta:\n");

    printf ("Insira o Estado:\n");
    scanf ("%c", &Estado);

    printf ("Insira o Codigo:\n");
    scanf ("%s", &Codigo);

    printf ("Insira o nome da Cidade:\n");
    scanf ("%s", &Cidade);

    printf ("Insira a População:\n");
    scanf ("%f", &Populacao);

    printf ("Insira a Área:\n");
    scanf ("%f", &Area);

    printf ("Insira o PIB:\n");
    scanf ("%f", &PIB);

    printf ("Insira os Pontos Turísticos:\n");
    scanf ("%d", &Pontosturisticos);


    printf ("Você Inseriu:\n");
    printf ("Primeira Carta\n");
    printf ("Estado:%c\n", Estado);
    printf ("Codigo:%s\n", Codigo);
    printf ("Cidade:%s\n", Cidade);
    printf ("População:%.3f milhões\n", Populacao);
    printf ("Área:%.3f Km²\n", Area);
    printf ("PIB:%.2f bilhões\n", PIB);
    printf ("Pontos Turísticos:%d\n", Pontosturisticos);

    //Para a segunda carta foram utilizados como dados de teste os dados da cidade de Goiania.
    //Por isso o float possui quantidades de casas decimais diferentes em cada cidade.

    printf ("Segunda Carta:\n");

    printf ("Insira o Estado:\n");
    scanf (" %c", &Estado);

    printf ("Insira o Codigo:\n");
    scanf ("%s", &Codigo);

    printf ("Insira o Nome da Cidade:\n");
    scanf ("%s", &Cidade);

    printf ("Insira a População:\n");
    scanf ("%f", &Populacao);

    printf ("Insira a Área:\n");
    scanf ("%f", &Area);

    printf ("Insira o PIB:\n");
    scanf ("%f", &PIB);

    printf ("Insira os Pontos Turísticos:\n");
    scanf ("%d", &Pontosturisticos);


    printf ("Você Inseriu:\n");
    printf ("Segunda Carta:\n");
    printf ("Estado:%c\n", Estado);
    printf ("Codigo:%s\n", Codigo);
    printf ("Cidade:%s\n", Cidade);
    printf ("População:%.3f milhões\n", Populacao);
    printf ("Área:%.1f Km²\n", Area);
    printf ("PIB:%.1f bilhões\n", PIB);
    printf ("Pontos Turísticos:%d\n", Pontosturisticos);



    return 0;


   
}
