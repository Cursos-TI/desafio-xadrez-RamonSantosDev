#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int c, b = 1, r = 1, R = 0, t = 1, escolhaUsuario, movimentoRainha; // declaração de variaveis
    // Menu interativo
    printf("**** Movimento das peças de xadrez ****\n");
    printf("Qual peça você quer mexer? \n");
    printf("1. - Peão\n");
    printf("2. - Cavalo\n");
    printf("3. - Bispo\n");
    printf("4. - Rainha\n");
    printf("5. - Rei\n");
    printf("6. - Torre\n");
    scanf("%d", &escolhaUsuario);


    switch (escolhaUsuario)
    {
    case 1:
        printf("Movimento do Peão\n");
        // uso do for com atribuição de variavel local
        // Peão anda duas casas para cima
        for (int p = 1; p <= 2 ; p++)
        {
           printf("Cima\n");
        }
        break;
    case 2:
        printf("Movimento carvalo: em construção\n");// movimento do cavalo em construção
    break;
    case 3:
        printf("Movimento do Bispo\n");

        while (b <= 5)
        {
            printf("Cima e Direita\n"); // Movimento do Bisco 5 casas na Diagonal direita
            b++;
        }
        
    break;
    case 4:
        printf("Digite quantos movimento a rainha vai fazer para a esquerda\n");// usuario decidi quantas casas a rainha vai andar
        scanf("%d", &movimentoRainha);
        do
        {
            printf("<- Esquerda \n");
            r++;
        } while (r <= movimentoRainha);

    break;
    case 5:
        
        do
        {
            printf("Movimento Rei\n");// Rei anda uma casa pra cima
            printf("Cima\n");
            R++;
        } while (R < 1);  // condição falso para o rei so andar uma casa  

    break;
    case 6:
        printf("Movimento da Torre\n"); // torre anda 5 casas para a direita

        while (t <= 5)
        {
           printf("Direita ->\n");
           t++;
        }
    break;

    default:
        printf("Opção inválida!\n");
        break;
    }







    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
