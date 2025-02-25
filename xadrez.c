#include <stdio.h>

void movimentacao(int casas, char *movimento){
    if (casas > 0){
        printf("Andou 1 casa para %s! \n", movimento);
        movimentacao(casas - 1, movimento);
    }
}

int main(){

    int peca, i = 0, casa, movimento, escolha;
    char direcao[4][20] = {"Cima", "Baixo", "Esquerda", "Direita"};
    char direcaoBispo[4][50] = {"Diagonal Cima Esquerda", "Diagonal Cima Direita", "Diagonal Baixo Esquerda", "Diagonal Baixo Direita"};
do
{
    printf("\nEscolha qual peça deseja mover: \n");
    printf("1. Bispo \n");
    printf("2. Torre \n");
    printf("3. Rainha \n");
    printf("4. Cavalo\n");
    printf("5. Sair\n");
    printf("Opção: ");
    scanf("%d", &peca);

switch (peca)
{
case 1:
        printf("\nDigite quantas casas desejar andar\n");
        scanf("%d", &casa);
        getchar();
            printf("Escolha para qual direção deseja andar: \n");
            printf("1. Diagonal Cima Esquerda\n");
            printf("2. Diagonal Cima Direita\n");
            printf("3. Diagonal Baixo Esquerda\n");
            printf("4. Diagonal Baixo Direita\n");
            scanf("%d", &escolha);

                switch (escolha)
                {
                case 1:
                    printf("\nMovimentação do Bispo: \n");
                    movimentacao(casa, direcaoBispo[0]);
                    break;
                case 2:
                    printf("\nMovimentação do Bispo: \n");
                    movimentacao(casa, direcaoBispo[1]);
                break;
                case 3:
                    printf("\nMovimentação do Bispo: \n");
                    movimentacao(casa, direcaoBispo[2]);
                break;
                case 4:
                    printf("\nMovimentação do Bispo: \n");
                    movimentacao(casa, direcaoBispo[3]);
                break;
                default:
                    printf("Opção Inválida!\n");
                    break;
                }
    break;

case 2:
    printf("\nDigite quantas casas desejar andar\n");
    scanf("%d", &casa);
    getchar();
                printf("\nEscolha para qual direção deseja andar: \n");
                printf("1. Cima \n");
                printf("2. Baixo \n");
                printf("3. Esquerda \n");
                printf("4. Direita \n");
                printf("Opção: ");
                scanf("%d", &escolha);
                    switch (escolha)
                    {
                    case 1:
                        printf("\nMovimentação da Torre: \n");
                        movimentacao(casa, direcao[0]);
                        break;
                    case 2:
                        printf("\nMovimentação da Torre: \n");
                        movimentacao(casa, direcao[1]);
                        break;
                    case 3:
                        printf("\nMovimentação da Torre: \n");
                        movimentacao(casa, direcao[2]);
                        break;
                    case 4:
                        printf("\nMovimentação da Torre: \n");
                        movimentacao(casa, direcao[3]);
                        break;
                    default:
                    printf("Opção Inválida!\n");
                        break;
                    }
    break;
    
case 3:
    printf("\nDigite quantas casas desejar andar\n");
    scanf("%d", &casa);
    getchar();
                printf("Escolha para qual direção deseja andar: \n");
                printf("1. Cima \n");
                printf("2. Baixo \n");
                printf("3. Esquerda \n");
                printf("4. Direita \n");
                printf("Opção: ");
                scanf("%d", &escolha);
            switch (escolha)
        {
            case 1:
                printf("\nMovimentação da Rainha: \n");
                movimentacao(casa, direcao[0]);
                break;
            case 2:
                printf("\nMovimentação da Rainha: \n");
                movimentacao(casa, direcao[1]);
                break;
            case 3:
                printf("\nMovimentação da Rainha: \n");
                movimentacao(casa, direcao[2]);
                break;
            case 4:
                printf("\nMovimentação da Rainha: \n");
                movimentacao(casa, direcao[0]);
                break;
            }
    break;

case 4: {

int movimento1, movimento2, direcao1, direcao2;
char direcao[4][30] = {"Cima", "Baixo", "Esquerda", "Direita"};

    printf("### Lembre-se que o cavalo só pode se mover fazendo um movimento que resulta em um L (deve totalizar 3 casas) ### \n");
    printf("Digite quantas casas deseja andar no primeiro movimento: ");
    scanf("%d", &movimento1);
    printf("\nEscolha a direção na qual o cavalo se movimentará no primeiro movimento: \n");
    printf("0. Cima \n");
    printf("1. Baixo \n");
    printf("2. Esquerda \n");
    printf("3. Direita \n");
    printf("Direção: ");
    scanf("%d", &direcao1);
    getchar();

    printf("\nEscolha a direção na qual o cavalo se movimentará no segundo movimento: \n");
    printf("0. Cima \n");
    printf("1. Baixo \n");
    printf("2. Esquerda \n");
    printf("3. Direita \n");
    printf("Direção: ");
    scanf("%d", &direcao2);
    getchar();

    movimento2 = (movimento1 == 1) ? 2 : 1;
    printf("\n");
        if ((movimento1 == 2 && movimento2 == 1) || (movimento1 == 1 && movimento2 == 2))
        {
            for(int i = 0, j = 0; i < movimento2 || j < movimento1; )
                if (j < movimento1) 
                    {
                        printf("Cavalo se moveu 1 casa para %s!\n", direcao[direcao1]);
                        j++;
                    } else if (i < movimento2)
                    {
                        printf("Cavalo se moveu 1 casa para %s!\n", direcao[direcao2]);
                        i++;
                    }
    } else {
        printf("Movimento Inválido! O Cavalo DEVE andar 3 casas em formato de L, qualquer valor a mais ou a menos será invalidado.\n");
    }
    break;
}

case 5:
    printf("Saindo...\n");
    break;

default:
    printf("Opção Inválida!\n");
    break;
    }


} while (peca < 4);

return 0;

}


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops