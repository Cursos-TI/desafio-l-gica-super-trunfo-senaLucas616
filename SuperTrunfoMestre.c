#include <stdio.h>

/*#Objetivos
     usuário poderá escolher dois atributos para comparação entre as cartas.
- **Lógica de Decisão Complexa:** Implementação de estruturas de decisão aninhadas e encadeadas, além do uso de operadores ternários para determinar a carta vencedora.
- **Menus Dinâmicos:** Os menus serão dinâmicos, permitindo uma navegação fluida entre as opções de comparação.

### 🚩 Novas Funcionalidades:
- **Comparação de Dois Atributos:** O sistema comparará dois atributos simultaneamente para determinar a carta vencedora.
- **Lógica Avançada:** Uso de operadores ternários e lógica aninhada para lidar com comparações complexas.
- **Empates:** O sistema será capaz de lidar com empates, exibindo mensagens apropriadas.
- **Exibição de Resultados:** Exibição dos resultados das comparações de forma clara e interativa.


*/

//funçao que recebe os dados para criaçao das cartas do super trunfo.
void entradaDeDados(char estado[],char codigo_da_carta[],char nome_da_cidade[],int *populacao,float *area,float *pib,int *numero_de_pontos_turisticos){
    printf("Digite o nome do estado.\n:");
    scanf(" %[^\n]", estado);
    
    printf("Digite o codigo da carta.\n:");
    scanf(" %[^\n]", codigo_da_carta);
    
    printf("Digite o nome da cidade.\n:");
    scanf(" %[^\n]", nome_da_cidade);
    
    printf("Digite a quantidade da populaçao.\n:");
    scanf("%d",populacao);

    printf("Digite a numero da area.\n:");
    scanf("%f",area);

    printf("Digite o valor do pib.\n:");
    scanf("%f",pib);

    printf("Digite o numero de pontos turisticos.\n:");
    scanf("%d",numero_de_pontos_turisticos);

}
int main(){
    ///Iniciando o programa
    printf("Super Trunfo Novato\nbem vindo ao jogo.\n");
    
    //declarando as variaveis para a carta 1
    char estado1[30];
    char codigo_da_carta1[10];
    char nome_da_cidade1[30];
    int populacao1 = 0;
    float area1 = 0.0f;
    float pib1 = 0.0f;
    int numero_de_pontos_turisticos1 = 0;
    float densidade_populacional1 = 0.0f;
    float pib_per_capita1 = 0.0f;
    
    //declarando as variaveis para a carta 2
    char estado2[30];
    char codigo_da_carta2[10];
    char nome_da_cidade2[30];
    int populacao2 = 0;
    float area2 = 0.0f;
    float pib2 = 0.0f;
    int numero_de_pontos_turisticos2 = 0;
    float densidade_populacional2 = 0.0f;
    float pib_per_capita2 = 0.0f;
    int escolha_do_atributo = 0;
    int escolha_do_2_atributo = 0;

    ///Digitando os dados das cartas
    printf("Digite os dados da carta 1:\n");
    printf("-------------------------\n"); 
    printf("Carta 1:\n");
    //chamando a funçao de entrada de dados para carta 1
    entradaDeDados(estado1,codigo_da_carta1,nome_da_cidade1,&populacao1,&area1,&pib1,&numero_de_pontos_turisticos1);  
    
    printf("Digite os dados da carta 2:\n");
    printf("-------------------------\n"); 
    printf("Carta 2:\n");
    //chamando a funçao de entrada de dados para carta 2
    entradaDeDados(estado2,codigo_da_carta2,nome_da_cidade2,&populacao2,&area2,&pib2,&numero_de_pontos_turisticos2);
    
    
    printf("Calculando os atributos das cartas...\n");
    printf("--------------------------------------\n");
    //calculando a densidade populacional e pib per capita para carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    
    //calculando a densidade populacional e pib per capita para carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    

    //loop para garantir que o jogador escolha um atributo valido
    do {
    //selecionado qual atributo a ser comparado
    printf("Seleçao para qual dos atributos\nos jogadores desejam comparar.\n");
    printf("--------------------------------------\n");
    
    printf("digite os respectivos numeros dos atribuídos aos atributos para selecionar\na característica desejada.\n");
    printf("(1) População.\n(2) Área\n(3) PIB.\n(4) Número de pontos turísticos.\n(5) densidade populacional.\n(6) PIB per capita.\n:");
    scanf("%d",&escolha_do_atributo);
    printf("--------------------------------------\n");
    printf("Selecione mais  uma caracteristica para comparaçao do segundo atributo.\n:");  
    scanf("%d",&escolha_do_2_atributo);
    printf("--------------------------------------\n");
    
    //Prmeiro menu interativo usando switch para escolher o atributo e sua confirmaçao e comparação.
    switch(escolha_do_atributo){
        case 1:
            printf("Sua primeira caracteristica escolhida foi o atributo População.\n");
        break;
        case 2:
            printf("Sua primeira caracteristica escolhida foi o atributo Área\n");
        break;
        case 3:
            printf("Sua primeira caracteristica escolhida foi o atributo PIB.\n");
        break;
        case 4:
            printf("Sua primeira caracteristica escolhida foi o atributo de Número de pontos turísticos.\n");
        break;
        case 5:
            printf("Sua primeira caracteristica escolhida foi o atributo da Densidade Populacional.\n");
        break;
        case 6:
            printf("Sua primeira caracteristica escolhida foi o atributo PIB per capita.\n");
        break;
        default:
            printf("Sua primeira caracteristica escolhida foi o atributo PIB\n");
    }
    //Segundo menu interativo usando switch para escolher o atributo e sua confirmaçao e comparação.
    switch(escolha_do_atributo){
        case 1:
            printf("Sua segunda caracteristica escolhida foi o atributo População.\n");
        break;
        case 2:
            printf("Sua segunda caracteristica escolhida foi o atributo Área\n");
        break;
        case 3:
            printf("Sua segunda caracteristica escolhida foi o atributo PIB.\n");
        break;
        case 4:
            printf("Sua segunda caracteristica escolhida foi o atributo de Número de pontos turísticos.\n");
        break;
        case 5:
            printf("Sua segunda caracteristica escolhida foi o atributo da Densidade Populacional.\n");
        break;
        case 6:
            printf("Sua segunda caracteristica escolhida foi o atributo PIB per capita.\n");
        break;
        default:
            printf("Sua segunda caracteristica escolhida foi o atributo PIB\n");
    }
    
    }while (escolha_do_atributo < 1 || escolha_do_atributo > 6);
    //Fim do programa  super trunfo nivel aventureiro.
    return 0;
}

