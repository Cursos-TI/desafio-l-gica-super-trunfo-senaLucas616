#include <stdio.h>

/*#Objetivos
### 🎯 Objetivos do ProjetoSuperTrunfo nivel mestre:
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
//Funçao para comparaçao de atributos.para escolher o atributo pelo menu interativo.e para comparar atributos dois simultaneamente.
void comparacaoDeAtributos(int escolha_do_atributo,int escolha_do_2_atributo,int populacao1, int populacao2, float area1, float area2, float pib1, float pib2, int numero_de_pontos_turisticos1, int numero_de_pontos_turisticos2, float densidade_populacional1, float densidade_populacional2, float pib_per_capita1, float pib_per_capita2){
    ///Primeiro Menu interativo usando switch para escolher o atributo e sua confirmaçao e comparação.
    switch(escolha_do_atributo){
        case 1:
            printf("Sua caracteristica escolhida foi o atributo População.\n");
            (populacao1 > populacao2) ? printf("A carta 1 venceu a carta 2 com %d habitantes contra %d habitantes.\n",populacao1,populacao2) : (populacao1 < populacao2) ? printf("A carta 2 venceu a carta 1 com %d habitantes contra %d habitantes.\n",populacao2,populacao1) : printf("Houve um empate entre as cartas com %d habitantes.\n",populacao1);
        break;
        case 2:
            printf("Sua caracteristica escolhida foi o atributo Área\n");
            (area1 > area2) ? printf("A carta 1 venceu a carta 2 com %.2f km² contra %.2f km².\n",area1,area2) : (area1 < area2) ? printf("A carta 2 venceu a carta 1 com %.2f km² contra %.2f km².\n",area2,area1) : printf("Houve um empate entre as cartas com %.2f km².\n",area1);
        break;
        case 3:
            printf("Sua caracteristica escolhida foi o atributo PIB.\n");
            (pib1 > pib2) ? printf("A carta 1 venceu a carta 2 com R$ %.2f contra R$ %.2f.\n",pib1,pib2) : (pib1 < pib2) ? printf("A carta 2 venceu a carta 1 com R$ %.2f contra R$ %.2f.\n",pib2,pib1) : printf("Houve um empate entre as cartas com R$ %.2f.\n",pib1);
        break;
        case 4:
            printf("Sua caracteristica escolhida foi o atributo de Número de pontos turísticos.\n");
            (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) ? printf("A carta 1 venceu a carta 2 com %d pontos turísticos contra %d pontos turísticos.\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2) : (numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2) ? printf("A carta 2 venceu a carta 1 com %d pontos turísticos contra %d pontos turísticos.\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1) : printf("Houve um empate entre as cartas com %d pontos turísticos.\n",numero_de_pontos_turisticos1);
        break;
        case 5:
            printf("Sua caracteristica escolhida foi o atributo da Densidade Populacional.\n");
            (densidade_populacional1 > densidade_populacional2) ? printf("A carta 1 venceu a carta 2 com %.2f habitantes por km² contra %.2f habitantes por km².\n",densidade_populacional1,densidade_populacional2) : (densidade_populacional1 < densidade_populacional2) ? printf("A carta 2 venceu a carta 1 com %.2f habitantes por km² contra %.2f habitantes por km².\n",densidade_populacional2,densidade_populacional1) : printf("Houve um empate entre as cartas com %.2f habitantes por km².\n",densidade_populacional1);
        break;
        case 6:
            printf("Sua caracteristica escolhida foi o atributo PIB per capita.\n");
            (pib_per_capita1 > pib_per_capita2) ? printf("A carta 1 venceu a carta 2 com R$ %.2f contra R$ %.2f.\n",pib_per_capita1,pib_per_capita2) : (pib_per_capita1 < pib_per_capita2) ? printf("A carta 2 venceu a carta 1 com R$ %.2f contra R$ %.2f.\n",pib_per_capita2,pib_per_capita1) : printf("Houve um empate entre as cartas com R$ %.2f.\n",pib_per_capita1);
        break;
        default:
            printf("Sua caracteristica escolhida foi o atributo PIB\n");
            (pib1 > pib2) ? printf("A carta 1 venceu a carta 2 com R$ %.2f contra R$ %.2f.\n",pib1,pib2) : (pib1 < pib2) ? printf("A carta 2 venceu a carta 1 com R$ %.2f contra R$ %.2f.\n",pib2,pib1) : printf("Houve um empate entre as cartas com R$ %.2f.\n",pib1);
    }
    //Segundo menu interativo usando switch para escolher o atributo e sua confirmaçao e comparação.
    switch (escolha_do_2_atributo){
        case 1:
            printf("Sua segunda caracteristica escolhida foi o atributo População.\n");
            (populacao1 > populacao2) ? printf("A carta 1 venceu a carta 2 com %d habitantes contra %d habitantes.\n",populacao1,populacao2) : (populacao1 < populacao2) ? printf("A carta 2 venceu a carta 1 com %d habitantes contra %d habitantes.\n",populacao2,populacao1) : printf("Houve um empate entre as cartas com %d habitantes.\n",populacao1);
            break;
        case 2:
            printf("Sua segunda caracteristica escolhida foi o atributo Área\n");
            (area1 > area2) ? printf("A carta 1 venceu a carta 2 com %.2f km² contra %.2f km².\n",area1,area2) : (area1 < area2) ? printf("A carta 2 venceu a carta 1 com %.2f km² contra %.2f km².\n",area2,area1) : printf("Houve um empate entre as cartas com %.2f km².\n",area1);
        break;
        case 3:
            printf("Sua segunda caracteristica escolhida foi o atributo PIB.\n");
            (pib1 > pib2) ? printf("A carta 1 venceu a carta 2 com R$ %.2f contra R$ %.2f.\n",pib1,pib2) : (pib1 < pib2) ? printf("A carta 2 venceu a carta 1 com R$ %.2f contra R$ %.2f.\n",pib2,pib1) : printf("Houve um empate entre as cartas com R$ %.2f.\n",pib1);
        break;
        case 4:
            printf("Sua segunda caracteristica escolhida foi o atributo de Número de pontos turísticos.\n");
            (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) ? printf("A carta 1 venceu a carta 2 com %d pontos turísticos contra %d pontos turísticos.\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2) : (numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2) ? printf("A carta 2 venceu a carta 1 com %d pontos turísticos contra %d pontos turísticos.\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1) : printf("Houve um empate entre as cartas com %d pontos turísticos.\n",numero_de_pontos_turisticos1);
        break;
        case 5:
            printf("Sua segunda caracteristica escolhida foi o atributo da Densidade Populacional.\n");
            (densidade_populacional1 > densidade_populacional2) ? printf("A carta 1 venceu a carta 2 com %.2f habitantes por km² contra %.2f habitantes por km².\n",densidade_populacional1,densidade_populacional2) : (densidade_populacional1 < densidade_populacional2) ? printf("A carta 2 venceu a carta 1 com %.2f habitantes por km² contra %.2f habitantes por km².\n",densidade_populacional2,densidade_populacional1) : printf("Houve um empate entre as cartas com %.2f habitantes por km².\n",densidade_populacional1);
        break;
        case 6:
            printf("Sua segunda caracteristica escolhida foi o atributo PIB per capita.\n");
            (pib_per_capita1 > pib_per_capita2) ? printf("A carta 1 venceu a carta 2 com R$ %.2f contra R$ %.2f.\n",pib_per_capita1,pib_per_capita2) : (pib_per_capita1 < pib_per_capita2) ? printf("A carta 2 venceu a carta 1 com R$ %.2f contra R$ %.2f.\n",pib_per_capita2,pib_per_capita1) : printf("Houve um empate entre as cartas com R$ %.2f.\n",pib_per_capita1);
        break;
        default:
            printf("Sua segunda caracteristica escolhida foi o atributo PIB\n");
            (pib1 > pib2) ? printf("A carta 1 venceu a carta 2 com R$ %.2f contra R$ %.2f.\n",pib1,pib2) : (pib1 < pib2) ? printf("A carta 2 venceu a carta 1 com R$ %.2f contra R$ %.2f.\n",pib2,pib1) : printf("Houve um empate entre as cartas com R$ %.2f.\n",pib1);

    }
    //Lógica de decisão complexa para comparar dois atributos simultaneamente.
    //Sem arrays, sem estruturas de dados avançadas, apenas com variáveis simples e estruturas condicionais aninhadas e encadeadas.
    //comparação dos dois atributos escolhidos. que sao a populaçao e area. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    if (escolha_do_atributo == 1 && escolha_do_2_atributo == 2){
        printf("Você comparou os atributos População e Área.\n");
        if(populacao1 > populacao2 && area1 > area2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d > %d\n",populacao1,populacao2);
            printf("Atributo Área: %.2f > %.2f\n",area1,area2);
            printf("------------------------------\n");
        }else if(populacao1 < populacao2 && area1 < area2){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d > %d\n",populacao2,populacao1);
            printf("Atributo Área: %.2f > %.2f\n",area2,area1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d e %d\n",populacao1,populacao2);
            printf("Atributo Área: %.2f e %.2f\n",area1,area2);
            printf("------------------------------\n");
        }
    //comparação dos dois atributos escolhidos. que sao a populaçao e pib. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if (escolha_do_atributo == 1 && escolha_do_2_atributo == 3){
        printf("Você comparou os atributos População e PIB.\n");
        if(populacao1 > populacao2 && pib1 > pib2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d > %d\n",populacao1,populacao2);
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib1,pib2);
            printf("------------------------------\n");
        }else if(populacao1 < populacao2 && pib1 < pib2){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d > %d\n",populacao2,populacao1);
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib2,pib1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d e %d\n",populacao1,populacao2);
            printf("Atributo PIB: R$ %.2f e R$ %.2f\n",pib1,pib2);
            printf("------------------------------\n");
        }
    //comparação dos dois atributos escolhidos. que sao a populaçao e numero de pontos turisticos. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if (escolha_do_atributo == 1 && escolha_do_2_atributo == 4){
        printf("Você comparou os atributos População e Número de pontos turísticos.\n");
        if(populacao1 > populacao2 && numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d > %d\n",populacao1,populacao2);
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("------------------------------\n");
        }else if(populacao2 > populacao1 && numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d > %d\n",populacao2,populacao1);
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d e %d\n",populacao1,populacao2);
            printf("Atributo Número de pontos turísticos: %d e %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao a populaçao e densidade populacional. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos. Lembrando que menor densidade populacional vence.
    }else if (escolha_do_atributo == 1 && escolha_do_2_atributo == 5){
        printf("Você comparou os atributos População e Densidade Populacional.\n");
        if(populacao1 > populacao2 && densidade_populacional1 < densidade_populacional2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d > %d\n",populacao1,populacao2);
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("------------------------------\n");
        }else if(populacao2 > populacao1 && densidade_populacional2 < densidade_populacional1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d > %d\n",populacao2,populacao1);
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional2,densidade_populacional1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d e %d\n",populacao1,populacao2);
            printf("Atributo Densidade Populacional: %.2f e %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao a populaçao e pib per capita. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if (escolha_do_atributo == 1 && escolha_do_2_atributo == 6){
        printf("Você comparou os atributos População e PIB per capita.\n");
        if(populacao1 > populacao2 && pib_per_capita1 > pib_per_capita2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d > %d\n",populacao1,populacao2);
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("------------------------------\n");
        }else if(populacao2 > populacao1 && pib_per_capita2 > pib_per_capita1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d > %d\n",populacao2,populacao1);
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita2,pib_per_capita1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo População: %d e %d\n",populacao1,populacao2);
            printf("Atributo PIB per capita: R$ %.2f e R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao a area e populaçao. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 2 && escolha_do_2_atributo == 1){   
        printf("Você comparou os atributos Área e População.\n");
        if(area1 > area2 && populacao1 > populacao2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f > %.2f\n",area1,area2);
            printf("Atributo População: %d > %d\n",populacao1,populacao2);
            printf("------------------------------\n");
        }else if(area2 > area1 && populacao2 > populacao1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f > %.2f\n",area2,area1);
            printf("Atributo População: %d > %d\n",populacao2,populacao1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f e %.2f\n",area1,area2);
            printf("Atributo População: %d e %d\n",populacao1,populacao2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao a area e pib. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 2 && escolha_do_2_atributo == 3){
            printf("Você comparou os atributos Área e PIB.\n");
        if(area1 > area2 && pib1 > pib2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f > %.2f\n",area1,area2);
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib1,pib2);
            printf("------------------------------\n");
        }else if(area2 > area1 && pib2 > pib1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f > %.2f\n",area2,area1);
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib2,pib1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f e %.2f\n",area1,area2);
            printf("Atributo PIB: R$ %.2f e R$ %.2f\n",pib1,pib2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao a area e numero de pontos turisticos. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 2 && escolha_do_2_atributo == 4){
        printf("Você comparou os atributos Área e Número de pontos turísticos.\n");
        if(area1 > area2 && numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f > %.2f\n",area1,area2);
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("------------------------------\n");
        }else if(area2 > area1 && numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f > %.2f\n",area2,area1);
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f e %.2f\n",area1,area2);
            printf("Atributo Número de pontos turísticos: %d e %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("------------------------------\n");
        }

//comparação dos dois atributos escolhidos. que sao a area e densidade populacional. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.Lembrando que menor densidade populacional vence.
}else if(escolha_do_atributo == 2 && escolha_do_2_atributo == 5){
        printf("Você comparou os atributos Área e Densidade Populacional.\n");
        if(area1 > area2 && densidade_populacional1 < densidade_populacional2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f > %.2f\n",area1,area2);
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("------------------------------\n");
        }else if(area2 > area1 && densidade_populacional2 < densidade_populacional1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f > %.2f\n",area2,area1);
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional2,densidade_populacional1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f e %.2f\n",area1,area2);
            printf("Atributo Densidade Populacional: %.2f e %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("------------------------------\n");
        }
//comparação dos dois atributos escolhidos. que sao a area e pib per capita. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 2 && escolha_do_2_atributo == 6){
        printf("Você comparou os atributos Área e PIB per capita.\n");
        if(area1 > area2 && pib_per_capita1 > pib_per_capita2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f > %.2f\n",area1,area2);
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("------------------------------\n");
        }else if(area2 > area1 && pib_per_capita2 > pib_per_capita1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f > %.2f\n",area2,area1);
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita2,pib_per_capita1); 
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Área: %.2f e %.2f\n",area1,area2);
            printf("Atributo PIB per capita: R$ %.2f e R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao o pib e populaçao. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 3 && escolha_do_2_atributo == 1){
        printf("Você comparou os atributos PIB e População.\n");
        if(pib1 > pib2 && populacao1 > populacao2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib1,pib2);
            printf("Atributo População: %d > %d\n",populacao1,populacao2);
            printf("------------------------------\n");
        }else if(pib2 > pib1 && populacao2 > populacao1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib2,pib1);
            printf("Atributo População: %d > %d\n",populacao2,populacao1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f e R$ %.2f\n",pib1,pib2);
            printf("Atributo População: %d e %d\n",populacao1,populacao2);
            printf("------------------------------\n");
        }
    //comparação dos dois atributos escolhidos. que sao o pib e area. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 3 && escolha_do_2_atributo == 2){
        printf("Você comparou os atributos PIB e Área.\n");
        if(pib1 > pib2 && area1 > area2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib1,pib2);
            printf("Atributo Área: %.2f > %.2f\n",area1,area2);
            printf("------------------------------\n");
        }else if(pib2 > pib1 && area2 > area1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib2,pib1);
            printf("Atributo Área: %.2f > %.2f\n",area2,area1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f e R$ %.2f\n",pib1,pib2);
            printf("Atributo Área: %.2f e %.2f\n",area1,area2);
            printf("------------------------------\n");
        }
    //comparação dos dois atributos escolhidos. que sao o pib e numero de pontos turisticos. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 3 && escolha_do_2_atributo == 4){
        printf("Você comparou os atributos PIB e Número de pontos turísticos.\n");
        if(pib1 > pib2 && numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib1,pib2);
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("------------------------------\n");
        }else if(pib2 > pib1 && numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib2,pib1);
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f e R$ %.2f\n",pib1,pib2);
            printf("Atributo Número de pontos turísticos: %d e %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("------------------------------\n");
        }
    //comparação dos dois atributos escolhidos. que sao o pib e densidade populacional. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.Lembrando que menor densidade populacional vence.
    }else if(escolha_do_atributo == 3 && escolha_do_2_atributo == 5){
        printf("Você comparou os atributos PIB e Densidade Populacional.\n");
        if(pib1 > pib2 && densidade_populacional1 < densidade_populacional2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib1,pib2);
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("------------------------------\n");
        }else if(pib2 > pib1 && densidade_populacional2 < densidade_populacional1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib2,pib1);
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional2,densidade_populacional1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f e R$ %.2f\n",pib1,pib2);
            printf("Atributo Densidade Populacional: %.2f e %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao o pib e pib per capita. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 3 && escolha_do_2_atributo == 6){
        printf("Você comparou os atributos PIB e PIB per capita.\n");
        if(pib1 > pib2 && pib_per_capita1 > pib_per_capita2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib1,pib2);
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("------------------------------\n");
        }else if(pib2 > pib1 && pib_per_capita2 > pib_per_capita1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib2,pib1);
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita2,pib_per_capita1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB: R$ %.2f e R$ %.2f\n",pib1,pib2);
            printf("Atributo PIB per capita: R$ %.2f e R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao o numero de pontos turisticos e populaçao. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 4 && escolha_do_2_atributo == 1){
        printf("Você comparou os atributos Número de pontos turísticos e População.\n");
        if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 && populacao1 > populacao2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("Atributo População: %d > %d\n",populacao1,populacao2);
            printf("------------------------------\n");
        }else if(numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1 && populacao2 > populacao1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1);
            printf("Atributo População: %d > %d\n",populacao2,populacao1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d e %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("Atributo População: %d e %d\n",populacao1,populacao2);
            printf("------------------------------\n");
        }

    
     //comparação dos dois atributos escolhidos. que sao o numero de pontos turisticos e area. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 4 && escolha_do_2_atributo == 2){
        printf("Você comparou os atributos Número de pontos turísticos e Área.\n");
        if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 && area1 > area2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("Atributo Área: %.2f > %.2f\n",area1,area2);
            printf("------------------------------\n");
        }else if(numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1 && area2 > area1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1);
            printf("Atributo Área: %.2f > %.2f\n",area2,area1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d e %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("Atributo Área: %.2f e %.2f\n",area1,area2);
            printf("------------------------------\n");
        }
    //comparação dos dois atributos escolhidos. que sao o numero de pontos turisticos e pib. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 4 && escolha_do_2_atributo == 3){
        printf("Você comparou os atributos Número de pontos turísticos e PIB.\n");
        if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 && pib1 > pib2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib1,pib2);
            printf("------------------------------\n");
        }else if(numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1 && pib2 > pib1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1);
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib2,pib1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d e %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("Atributo PIB: R$ %.2f e R$ %.2f\n",pib1,pib2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao o numero de pontos turisticos e densidade populacional. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.Lembrando que menor densidade populacional vence.
    }else if(escolha_do_atributo == 4 && escolha_do_2_atributo == 5){
        printf("Você comparou os atributos Número de pontos turísticos e Densidade Populacional.\n");
        if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 && densidade_populacional1 < densidade_populacional2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("------------------------------\n");
        }else if(numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1 && densidade_populacional2 < densidade_populacional1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1);
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional2,densidade_populacional1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d e %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("Atributo Densidade Populacional: %.2f e %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("------------------------------\n"); 
        }
        //comparação dos dois atributos escolhidos. que sao o numero de pontos turisticos e pib per capita. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 4 && escolha_do_2_atributo == 6){
        printf("Você comparou os atributos Número de pontos turísticos e PIB per capita.\n");
        if(numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 && pib_per_capita1 > pib_per_capita2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("------------------------------\n");
        }else if(numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1 && pib_per_capita2 > pib_per_capita1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1);
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita2,pib_per_capita1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Número de pontos turísticos: %d e %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("Atributo PIB per capita: R$ %.2f e R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("------------------------------\n"); 
        }
        //comparação dos dois atributos escolhidos. que sao a densidade populacional e populaçao. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.Lembrando que menor densidade populacional vence.
    }else if(escolha_do_atributo == 5 && escolha_do_2_atributo == 1){
        printf("Você comparou os atributos Densidade Populacional e População.\n");
        if(densidade_populacional1 < densidade_populacional2 && populacao1 > populacao2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("Atributo População: %d > %d\n",populacao1,populacao2);
            printf("------------------------------\n");
        }else if(densidade_populacional2 < densidade_populacional1 && populacao2 > populacao1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional2,densidade_populacional1);
            printf("Atributo População: %d > %d\n",populacao2,populacao1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f e %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("Atributo População: %d e %d\n",populacao1,populacao2);
            printf("------------------------------\n");
        }
    //comparação dos dois atributos escolhidos. que sao a densidade populacional e area. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.Lembrando que menor densidade populacional vence.
    }else if(escolha_do_atributo == 5 && escolha_do_2_atributo == 2){
        printf("Você comparou os atributos Densidade Populacional e Área.\n");
        if(densidade_populacional1 < densidade_populacional2 && area1 > area2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("Atributo Área: %.2f > %.2f\n",area1,area2);
            printf("------------------------------\n");
        }else if(densidade_populacional2 < densidade_populacional1 && area2 > area1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional2,densidade_populacional1);
            printf("Atributo Área: %.2f > %.2f\n",area2,area1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f e %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("Atributo Área: %.2f e %.2f\n",area1,area2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao a densidade populacional e pib. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.Lembrando que menor densidade populacional vence.
    }else if(escolha_do_atributo == 5 && escolha_do_2_atributo == 3){
        printf("Você comparou os atributos Densidade Populacional e PIB.\n");
        if(densidade_populacional1 < densidade_populacional2 && pib1 > pib2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib1,pib2);
            printf("------------------------------\n");
        }else if(densidade_populacional2 < densidade_populacional1 && pib2 > pib1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional2,densidade_populacional1);
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib2,pib1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f e %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("Atributo PIB: R$ %.2f e R$ %.2f\n",pib1,pib2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao a densidade populacional e numero de pontos turisticos. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.Lembrando que menor densidade populacional vence.
    }else if(escolha_do_atributo == 5 && escolha_do_2_atributo == 4){
        printf("Você comparou os atributos Densidade Populacional e Número de pontos turísticos.\n");
        if(densidade_populacional1 < densidade_populacional2 && numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("------------------------------\n");
        }else if(densidade_populacional2 < densidade_populacional1 && numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional2,densidade_populacional1);
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f e %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("Atributo Número de pontos turísticos: %d e %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("------------------------------\n"); 
        }
    }else if(escolha_do_atributo == 5 && escolha_do_2_atributo == 6){
        printf("Você comparou os atributos Densidade Populacional e PIB per capita.\n");
        if(densidade_populacional1 < densidade_populacional2 && pib_per_capita1 > pib_per_capita2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("------------------------------\n");
        }else if(densidade_populacional2 < densidade_populacional1 && pib_per_capita2 > pib_per_capita1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional2,densidade_populacional1);
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita2,pib_per_capita1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo Densidade Populacional: %.2f e %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("Atributo PIB per capita: R$ %.2f e R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("------------------------------\n"); 
        }
        //comparação dos dois atributos escolhidos. que sao o pib per capita e populaçao. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 6 && escolha_do_2_atributo == 1){
        printf("Você comparou os atributos PIB per capita e População.\n");
        if(pib_per_capita1 > pib_per_capita2 && populacao1 > populacao2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("Atributo População: %d > %d\n",populacao1,populacao2);
            printf("------------------------------\n");
        }else if(pib_per_capita2 > pib_per_capita1 && populacao2 > populacao1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita2,pib_per_capita1);
            printf("Atributo População: %d > %d\n",populacao2,populacao1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f e R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("Atributo População: %d e %d\n",populacao1,populacao2);
            printf("------------------------------\n"); 
        }
        //comparação dos dois atributos escolhidos. que sao o pib per capita e area. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 6 && escolha_do_2_atributo == 2){
        printf("Você comparou os atributos PIB per capita e Área.\n");
        if(pib_per_capita1 > pib_per_capita2 && area1 > area2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("Atributo Área: %.2f > %.2f\n",area1,area2); 
            printf("------------------------------\n");
        }else if(pib_per_capita2 > pib_per_capita1 && area2 > area1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita2,pib_per_capita1);
            printf("Atributo Área: %.2f > %.2f\n",area2,area1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f e R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("Atributo Área: %.2f e %.2f\n",area1,area2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao o pib per capita e pib. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 6 && escolha_do_2_atributo == 3){
        printf("Você comparou os atributos PIB per capita e PIB.\n");
        if(pib_per_capita1 > pib_per_capita2 && pib1 > pib2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib1,pib2);
            printf("------------------------------\n");
        }else if(pib_per_capita2 > pib_per_capita1 && pib2 > pib1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita2,pib_per_capita1);
            printf("Atributo PIB: R$ %.2f > R$ %.2f\n",pib2,pib1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f e R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("Atributo PIB: R$ %.2f e R$ %.2f\n",pib1,pib2);
            printf("------------------------------\n");
        }
        //comparação dos dois atributos escolhidos. que sao o pib per capita e numero de pontos turisticos. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 6 && escolha_do_2_atributo == 4){
        printf("Você comparou os atributos PIB per capita e Número de pontos turísticos.\n");
        if(pib_per_capita1 > pib_per_capita2 && numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("------------------------------\n");
        }else if(pib_per_capita2 > pib_per_capita1 && numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita2,pib_per_capita1);
            printf("Atributo Número de pontos turísticos: %d > %d\n",numero_de_pontos_turisticos2,numero_de_pontos_turisticos1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f e R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("Atributo Número de pontos turísticos: %d e %d\n",numero_de_pontos_turisticos1,numero_de_pontos_turisticos2);
            printf("------------------------------\n"); 
        }
        //comparação dos dois atributos escolhidos. que sao o pib per capita e densidade populacional. vence quem tiver os dois atributos maiores.e empata se houver empate em qualquer um dos atributos.ou perder em qualquer um dos atributos.
    }else if(escolha_do_atributo == 6 && escolha_do_2_atributo == 5){
        printf("Você comparou os atributos PIB per capita e Densidade Populacional.\n");
        if(pib_per_capita1 > pib_per_capita2 && densidade_populacional1 < densidade_populacional2){
            printf("------------------------------\n");
            printf("A carta 1 venceu a carta 2 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("------------------------------\n");
        }else if(pib_per_capita2 > pib_per_capita1 && densidade_populacional2 < densidade_populacional1){
            printf("------------------------------\n");
            printf("A carta 2 venceu a carta 1 em ambos os atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f > R$ %.2f\n",pib_per_capita2,pib_per_capita1);
            printf("Atributo Densidade Populacional: %.2f < %.2f\n",densidade_populacional2,densidade_populacional1);
            printf("------------------------------\n");
        }else{
            printf("------------------------------\n");
            printf("Houve um empate na comparação dos atributos.\n");
            printf("------------------------------\n");
            printf("Atributo PIB per capita: R$ %.2f e R$ %.2f\n",pib_per_capita1,pib_per_capita2);
            printf("Atributo Densidade Populacional: %.2f e %.2f\n",densidade_populacional1,densidade_populacional2);
            printf("------------------------------\n"); 
        }
    }
}   
int main(){
    ///Iniciando o programa
    printf("Super Trunfo Mestre\nbem vindo ao jogo.\n");
    //------------------------------------------------
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
    
    //variaveis para escolha dos atributos
    int escolha_do_atributo = 0;
    int escolha_do_2_atributo = 0;
    //variavel para controlar o loop do jogo
    int continuar_jogando = 1;

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
    //selecionado qual atributo a ser comparado
    do{
        printf("Seleçao para qual dos atributos\nos jogadores desejam comparar.\n");
        printf("--------------------------------------\n");
        printf("Escolha o atributo para comparar.\nDigite o número correspondente à característica desejada:\n");
        printf("(1) População.\n(2) Área\n(3) PIB.\n(4) Número de pontos turísticos.\n(5) densidade populacional.\n(6) PIB per capita.\n:");
        scanf("%d",&escolha_do_atributo);
        printf("--------------------------------------\n");
        printf("Selecione mais uma caracteristica para comparaçao do segundo atributo.\n:");  
        scanf("%d",&escolha_do_2_atributo);
        printf("--------------------------------------\n");
        //chamando a funçao de comparaçao dos atributos
        comparacaoDeAtributos(escolha_do_atributo,escolha_do_2_atributo,populacao1,populacao2,area1,area2,pib1,pib2,numero_de_pontos_turisticos1,numero_de_pontos_turisticos2,densidade_populacional1,densidade_populacional2,pib_per_capita1,pib_per_capita2);
    
        //perguntando se o jogador deseja continuar jogando
        printf("Deseja comparar novamente as cartas?\n(1) Sim\n(2) Não\n:");
        //entrada da escolha do jogador
        scanf("%d",&continuar_jogando);
        
        //condicional para verificar a escolha do jogador
        if(continuar_jogando == 1){
            printf("Reiniciando a comparação das cartas...\n");
        }else if(continuar_jogando == 2){
            printf("Encerrando o jogo. Obrigado por jogar!\n");
            break;
        }else{
            printf("Opção inválida. Encerrando o jogo. Obrigado por jogar!\n");
            break;
        }

    
    }while(continuar_jogando == 1);
    return 0;
}