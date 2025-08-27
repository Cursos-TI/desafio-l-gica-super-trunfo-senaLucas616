#include <stdio.h>

/*#Objetivos
    Receber os dados de duas cartas: O programa deve receber os dados de duas cartas do Super Trunfo. Utilize o código desenvolvido no desafio anterior para o cadastro das cartas. As cartas devem conter os seguintes atributos:
     
        Estado (string)
         
        Código da carta (string)
         
        Nome da cidade (string)
         
        População (int)
         
        Área (float)
         
        PIB (float)
         
        Número de pontos turísticos (int)
         
    Calcular Densidade Populacional e PIB per capita: O programa deve calcular e exibir:
     
        Densidade Populacional: População / Área
         
        PIB per capita: PIB / População
         
    Comparar um atributo escolhido: Você deverá escolher apenas um dos atributos numéricos (População, Área, PIB, Densidade Populacional ou PIB per capita) para realizar a comparação entre as duas cartas. Essa escolha deve ser feita diretamente no código, não pela entrada do usuário.
     
    Determinar a carta vencedora:
     
        Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.
         
        Para Densidade Populacional, a carta com o menor valor vence.
         
    Exibir o resultado da comparação: O programa deve exibir, de forma clara, qual carta venceu a comparação, incluindo o atributo utilizado na comparação e os valores das duas cartas para aquele atributo. Exemplo:


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
    
    //selecionado qual atributo a ser comparado
    printf("por favor selecione qual dos atributos os jogadores desejam comparar.\n");
    printf("digite os respectivos numeros dos atribuídos aos atributos para selecionar\na característica desejada.\n");
    printf("(1) População.\n(2) Área\n(3) PIB.\n(4) Número de pontos turísticos.\n(5) densidade populacional.\n(6) PIB per capita.\n");
    scanf("%d",&escolha_do_atributo);  

    switch(escolha_do_atributo){
        case 1:printf("Você escolheu o atributo População.\n");
        break;
        case 2:printf("Você escolheu o atributo Área\n");
        break
        case 3:printf("Você escolheu o atributo PIB.\n");
        break
        case 4:printf("Você escolheu o atributo Número de pontos turísticos.\n");
        break
        case 5:printf("Você escolheu o atributo Densidade Populacional.\n");
        break
        case 6:printf("Você escolheu o atributo PIB per capita.\n");
        break
        default:printf("Você escolheu o atributo PIB\n");
    }
    
    



  
  //fazendo comparaçao entre as cartas usando o atributo populaçao
    /*
    if(populacao1 > populacao2){
        printf("A carta 1 venceu a carta 2 usando o atributo populaçao.\n");
        printf("Populaçao da carta 1: %d\n",populacao1);
        printf("Populaçao da carta 2: %d\n",populacao2);

    }else if(populacao1 < populacao2){
        printf("A carta 2 venceu a carta 1 usando o atributo populaçao.\n");
        printf("Populaçao da carta 1: %d\n",populacao1);
        printf("Populaçao da carta 2: %d\n",populacao2);
    
    }
    */
    return 0;
}
