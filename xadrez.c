#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimetoBispo(int casas){//função movimento bispo com variavel casas

    if(casas > 0){ // condição casas maior que zero
        printf("diagonal (cima e direita)\n");
        movimetoBispo(casas - 1);// chamei a função dentro dela mesma para decrementar a variavel
    }

}
void movimentoTorre(int casas){//função movimento Torre com variavel casas
    if(casas > 0){// condição casas maior que zero
        printf("direita ->\n");
        movimentoTorre(casas - 1);// chamei a função dentro dela mesma para decrementar a variavel
    
    }
}
void movimentoRainha(int casas){
    if(casas > 0){
        printf("<- Esquerda\n");
        movimentoRainha(casas - 1);
    }
}

int main() {
    
    int b = 1, r = 1, R = 0, t = 1;
    int escolhaUsuario;
    int movimento = 1; // declaração de variaveis
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
        printf("Movimento carvalo:\n");// movimento do cavalo
    while (movimento <= 1)
    {
        for(int c = 1; c <= 2; c++){
            printf("cima\n");
        }
        printf("direita\n");
        movimento++;
    }
    break;
    case 3:
        printf("Movimento do Bispo\n");
        movimetoBispo(5);// chama a função e atribui 5 a variavel casas
        
    break;
    case 4:
        printf("Movimento a Rainha\n");

        movimentoRainha(8);// chama a função e atribui 5 a variavel casas
    
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
        movimentoTorre(5);
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
