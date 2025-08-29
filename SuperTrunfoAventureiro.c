#include <stdio.h>

/*#Objetivos
## 🏅 Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir a comparação aninhada e a criação de um menu interativo usando `switch`.

### 🆕 Diferença em relação ao Nível Novato:
- **Menu Interativo:** O usuário poderá escolher diferentes atributos para comparação através de um menu.
- **Comparação Aninhada:** Implementação de lógica de comparação mais complexa, utilizando estruturas aninhadas para tomar decisões baseadas em múltiplos atributos.

### 🚩 Novas Funcionalidades:
- **Cadastro de Cartas:** Similar ao nível Novato, com a adição de comparação de múltiplos atributos.
- **Menu Interativo:** Uso de `switch` para criar um menu que permite ao jogador escolher os atributos a serem comparados.
- **Exibição de Resultados:** O sistema exibirá o resultado da comparação, indicando qual carta venceu e qual atributo foi utilizado.

---

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
    printf("Super Trunfo Aventureiro\nbem vindo ao jogo.\n");
    
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
    printf("Seleçao para qual dos atributos\nos jogadores desejam comparar.\n");
    printf("--------------------------------------\n");
    
    printf("digite os respectivos numeros dos atribuídos aos atributos para selecionar\na característica desejada.\n");
    printf("(1) População.\n(2) Área\n(3) PIB.\n(4) Número de pontos turísticos.\n(5) densidade populacional.\n(6) PIB per capita.\n:");
    scanf("%d",&escolha_do_atributo);  
    
    //menu interativo usando switch para escolher o atributo
    switch(escolha_do_atributo){
        case 1:printf("Você escolheu o atributo População.\n");
        break;
        case 2:printf("Você escolheu o atributo Área\n");
        break;
        case 3:printf("Você escolheu o atributo PIB.\n");
        break;
        case 4:printf("Você escolheu o atributo Número de pontos turísticos.\n");
        break;
        case 5:printf("Você escolheu o atributo Densidade Populacional.\n");
        break;
        case 6:printf("Você escolheu o atributo PIB per capita.\n");
        break;
        default:printf("Você escolheu o atributo PIB\n");
    }
    
   //Possiveis escolhas dos atributos selecionados para comparaçao
   //atributo 1 - Populaçao - maior valor vence
   if(escolha_do_atributo == 1){
        if(populacao1 > populacao2){
            printf("A carta 1 venceu a carta 2 usando o atributo populaçao.\n");
            printf("Populaçao da carta 1: %d\n",populacao1);
            printf("Populaçao da carta 2: %d\n",populacao2);

        }else if(populacao1 < populacao2){
            printf("A carta 2 venceu a carta 1 usando o atributo populaçao.\n");
            printf("Populaçao da carta 1: %d\n",populacao1);
            printf("Populaçao da carta 2: %d\n",populacao2);
        
        }
    //atributo 2 - Area - maior valor vence
    }else if(escolha_do_atributo == 2){
        if(area1 > area2){
            printf("A carta 1 venceu a carta 2 usando o atributo area.\n");
            printf("Area da carta 1: %.2f\n",area1);
            printf("Area da carta 2: %.2f\n",area2);

        }else if(area1 < area2){
            printf("A carta 2 venceu a carta 1 usando o atributo area.\n");
            printf("Area da carta 1: %.2f\n",area1);
            printf("Area da carta 2: %.2f\n",area2);
        
        }
        //atributo 3 - Pib - maior valor vence
    }else if(escolha_do_atributo == 3){
        if(pib1 > pib2){
            printf("A carta 1 venceu a carta 2 usando o atributo pib.\n");
            printf("Pib da carta 1: %.2f\n",pib1);
            printf("Pib da carta 2: %.2f\n",pib2);

        }else if(pib1 < pib2){
            printf("A carta 2 venceu a carta 1 usando o atributo pib.\n");
            printf("Pib da carta 1: %.2f\n",pib1);
            printf("Pib da carta 2: %.2f\n",pib2);
        
        }
    //atributo 4 - Numero de pontos turisticos - maior valor vence
    }else if(escolha_do_atributo == 4){
        if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
            printf("A carta 1 venceu a carta 2 usando o atributo numero de pontos turisticos.\n");
            printf("Numero de pontos turisticos da carta 1: %d\n",numero_de_pontos_turisticos1);
            printf("Numero de pontos turisticos da carta 2: %d\n",numero_de_pontos_turisticos2);

        }else if(numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2){
            printf("A carta 2 venceu a carta 1 usando o atributo numero de pontos turisticos.\n");
            printf("Numero de pontos turisticos da carta 1: %d\n",numero_de_pontos_turisticos1);
            printf("Numero de pontos turisticos da carta 2: %d\n",numero_de_pontos_turisticos2);
        
        }
    //atributo 5 - Densidade populacional - menor valor vence
    }else if(escolha_do_atributo == 5){
        if(densidade_populacional1 < densidade_populacional2){
            printf("A carta 1 venceu a carta 2 usando o atributo densidade populacional.\n");
            printf("Densidade populacional da carta 1: %.2f\n",densidade_populacional1);
            printf("Densidade populacional da carta 2: %.2f\n",densidade_populacional2);

        }else if(densidade_populacional1 > densidade_populacional2){
            printf("A carta 2 venceu a carta 1 usando o atributo densidade populacional.\n");
            printf("Densidade populacional da carta 1: %.2f\n",densidade_populacional1);
            printf("Densidade populacional da carta 2: %.2f\n",densidade_populacional2);
        
        }
    //atributo 6 - Pib per capita - maior valor vence
    }else if(escolha_do_atributo == 6){
        if(pib_per_capita1 > pib_per_capita2){
            printf("A carta 1 venceu a carta 2 usando o atributo pib per capita.\n");
            printf("Pib per capita da carta 1: %.2f\n",pib_per_capita1);
            printf("Pib per capita da carta 2: %.2f\n",pib_per_capita2);

        }else if(pib_per_capita1 < pib_per_capita2){
            printf("A carta 2 venceu a carta 1 usando o atributo pib per capita.\n");
            printf("Pib per capita da carta 1: %.2f\n",pib_per_capita1);
            printf("Pib per capita da carta 2: %.2f\n",pib_per_capita2);
        
        }
    //caso o jogador digite um numero diferente dos atribuídos aos atributos retornado um  atributo default
    }else{
        if(pib1 > pib2){
            printf("A carta 1 venceu a carta 2 usando o atributo pib.\n");
            printf("Pib da carta 1: %.2f\n",pib1);
            printf("Pib da carta 2: %.2f\n",pib2);
    
        }else if(pib1 < pib2){
            printf("A carta 2 venceu a carta 1 usando o atributo pib.\n");
            printf("Pib da carta 1: %.2f\n",pib1);
            printf("Pib da carta 2: %.2f\n",pib2);
        }
    }
    //Fim do programa  super trunfo nivel aventureiro.
    return 0;
}
