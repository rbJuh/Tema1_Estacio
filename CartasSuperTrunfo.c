#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char pais[20];
    char estado[20];
    char cidade[20];
    char lestado; // Primeira parte do código da carta
    int numcidade; // Segunda parte do código da carta
    int populacao;
    int turistico;
    float area;
    float pib;


    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    

    printf("Bem-vindo ao jogo países\n"); // Mensagem para  usuário

    printf("Cadastre sua carta\n"); // Mensagem para  usuário

    printf("Digite o Nome do seu  País:\n");
    scanf(" %s",&pais);

    printf("Digite o nome do seu Estado:\n");
    scanf(" %s",&estado);

    printf("Digite uma letra para o seu Estado:\n");
    scanf(" %c",&lestado); // Primeira parte do código da carta

    printf("Digite o nome da sua cidade:\n");
    scanf(" %s",&cidade);

    printf("Digite um número para sua cidade:\n");
    scanf(" %d",&numcidade); // Segunda parte do código da carta

    printf("Digite a quantidade de população da sua cidade:\n");
    scanf(" %d",&populacao);

    printf("Digite a Área da sua cidade:\n");
    scanf(" %f",&area);

    printf("Digite o PIB da sua cidade:\n");
    scanf(" %f",&pib);

    printf("Digite o número de pontos turísticos da sua cidade:\n");
    scanf(" %d",&turistico);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n"); // Pulando linha vazia

    printf("Carta registrada com sucesso!\n"); // Mensagem para  usuário

    printf("\n"); // Pulando linha vazia

    printf("O código da sua carta é:%c",lestado); // Primeira parte do código da carta
    printf("%d\n",numcidade); // Segunda parte do código da carta

    printf("Nome do país:%s\n",pais);

    printf("Nome do estado:%s\n",estado);

    printf("Nome da cidade:%s\n",cidade);

    printf("Tamanho da População:%d\n",populacao);

    printf("Área da Cidade:%f\n",area);

    printf("PIB:%f\n",pib);

    printf("Número de pontos turísticos:%d\n",turistico);

    return 0;
}
