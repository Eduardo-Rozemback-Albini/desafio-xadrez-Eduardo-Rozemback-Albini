#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Declaração das funções que movimentam as peças
void movimentarBispo(int movCasas, int maxCasas) {
    if (movCasas > maxCasas) return; // Condição de parada

    // Loop para movimentação na diagonal (cima)
    for (int i = 1; i > 0; i--) {
        printf("BISPO SE MOVE PARA: CIMA\n");

        // Loop aninhado para mover na direção horizontal (direita)
        for (int j = 1; j > 0; j--) {
            printf("BISPO SE MOVE PARA: DIREITA\n");
        }
    }

    printf("ITERACAO: %d\n", movCasas);

    // Chamada recursiva para continuar a movimentação
    movimentarBispo(movCasas + 1, maxCasas);


    /*
    printf("BISPO SE MOVE PARA: CIMA, DIREITA\n");
    printf("ITERACAO: %d\n", movCasas);
    */
}
    

void movimentarTorre( int movCasas, int maxCasas){
        if (movCasas > maxCasas) return;
            printf("TORRE SE MOVE PARA: ");
            printf("DIREITA\n");
            printf("ITERACAO: %d\n", movCasas);
        
        movimentarTorre(movCasas + 1, maxCasas);
}

void movimentarRainha( int movCasas, int maxCasas){
    if (movCasas > maxCasas) return;
    printf("RAINHA SE MOVE PARA: ");
    printf("ESQUERDA\n");
    printf("ITERACAO: %d\n", movCasas);

    movimentarRainha(movCasas + 1, maxCasas);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    printf("\n### BEM VINDO AO SUPERTECNOLOGICO JOGO DE XADREZ MATECHECK ###\n");


    //**Movimentação das Peças:**
    const int movimentacaoBispo = 5; //Bispo: 5 casas na diagonal superior direita
    const int movimentacaoTorre = 5; //Torre: 5 casas para a direita
    const int movimentacaoRainha = 8; //Rainha: 8 casas para a esquerda
    const int andarCasas = 1;
    const int primeiroMovimentoCavalo = 2;
    const int segundoMovimentoCavalo = 1;

    int movimentarPeca;
    int programaRodando = 1;

while (programaRodando)
{
    // Menu
    printf("\n### MENU ###\n");
    printf("1. MOVER BISPO\n");
    printf("2. MOVER TORRE\n");
    printf("3. MOVER RAINHA\n");
    printf("4. MOVER CAVALO\n");
    printf("0. SAIR DO JOGO\n");
    printf("ESCOLHA UMA OPCAO:");
    scanf("%d", &movimentarPeca);

    printf("\n");


    switch (movimentarPeca){
    case 1:

        //***IMPLEMENTAR LOOP ANINHADO EXTERNO VERTICAL HORIZONTAL INTERNO


        // Implementação de Movimentação do Bispo
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        
        // Nível Avançado utilização de funções recursivas

        movimentarBispo(andarCasas, movimentacaoBispo);
        break;

    case 2:
        // Implementação de Movimentação da Torre
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        /* int iteracaoTorre = 5;
         do{
            printf("TORRE SE MOVE PARA: ");
            printf("DIREITA\n");
            printf("ITERACAO: %d\n", iteracaoTorre);
            iteracaoTorre++;
        } while (iteracaoTorre <= movimentacaoTorre);
        break;*/

        movimentarTorre(andarCasas + 1, movimentacaoTorre);
        break;

    case 3:
        // Implementação de Movimentação da Rainha
        // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        /*
        for (int iteracaoRainha = 1; iteracaoRainha <= movimentacaoRainha; iteracaoRainha++){
            printf("RAINHA SE MOVE PARA: ");
            printf("ESQUERDA\n");
            printf("ITERACAO: %d\n", iteracaoRainha);
        }*/
        movimentarRainha(andarCasas + 1, movimentacaoRainha);
        break;
    case 4:
        // Nível Aventureiro - Movimentação do Cavalo
        // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
        // Um loop pode representar a movimentação horizontal e outro vertical.

        // Nível Aventureiro
        //Implementando a lógica de movimentação do cavalo
        // Uso de loop aninhado
        // Atende solicitação nível Mestre com inicialização de múltiplas variáveis
        for (int i = 1, j = 1; i <= segundoMovimentoCavalo; i++, j++){
            // Segundo loop
            while (j <= primeiroMovimentoCavalo){
                printf("CAVALO SE MOVE PARA: ");
                printf("BAIXO\n");
                printf("ITERACAO: %d\n", j);
                j++;
            }

            printf("CAVALO SE MOVE PARA: ");
            printf("ESQUERDA \n");
            printf("ITERACAO: %d\n", i);
        }
        break;

    
    case 0:
        // Encerra o programa
        programaRodando = 0; // Sai do loop e permite que o programa seja encerrado.1
        break;
    
    default:
        printf("OPCAO INVALIDA. TENTE NOVAMENTE\n");
        break;
    }
}

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    printf("O JOGO SERA ENCERRADO! OBRIGADO POR JOGAR!!\n\n");
    return 0;
  
}
