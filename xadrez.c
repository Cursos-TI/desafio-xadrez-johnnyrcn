#include <stdio.h>

int main(){

    int peca, i = 0, casa;
    char direcao;

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
            printf("a. Diagonal Cima Esquerda\n");
            printf("b. Diagonal Cima Direita\n");
            printf("c. Diagonal Baixo Esquerda\n");
            printf("d. Diagonal Baixo Direita\n");
            scanf("%c", &direcao);


                switch (direcao)
                {
                case 'a':
                    while (i < casa)
                    {
                    printf("Bispo se movimentou 1 casa na diagonal cima esquerda!\n");
                    i++;
                    }
                    break;
                case 'b':
                    while (i < casa)
                {
                    printf("Bispo se movimentou 1 casa na diagonal cima direita!\n");
                    i++;
                }
                break;
                case 'c':
                    while (i < casa)
                {
                    printf("Bispo se movimentou 1 casa na diagonal baixo esquerda!\n");
                    i++;
                }
                break;
                case 'd':
                    while (i < casa)
                {
                    printf("Bispo se movimentou 1 casa na diagonal baixo direita!\n");
                    i++;
                }
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
                printf("Escolha para qual direção deseja andar: \n");
                printf("a. Cima \n");
                printf("b. Baixo \n");
                printf("c. Esquerda \n");
                printf("d. Direita \n");
                printf("Opção: ");
                scanf("%c", &direcao);
                    switch (direcao)
                    {
                    case 'a':
                    {
                        do
                        {
                            printf("Torre andou 1 casa para cima! \n");
                            i++;
                        } while (i < casa);
                        }
                        break;
                    case 'b':
                        do
                        {
                            printf("Torre andou 1 casa para baixo! \n");
                            i++;
                        } while (i < casa);
                        break;
                    case 'c':
                        do
                        {
                            printf("Torre andou 1 casa para esquerda! \n");
                            i++;
                        } while (i < casa);
                        break;
                    case 'd':
                        do
                        {
                            printf("Torre andou 1 casa para direita! \n");
                            i++;
                        } while (i < casa);
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
                printf("a. Cima \n");
                printf("b. Baixo \n");
                printf("c. Esquerda \n");
                printf("d. Direita \n");
                printf("Opção: ");
                scanf("%c", &direcao);
            switch (direcao)
        {
            case 'a':
                for(i = 0; i < casa; i++)
                {
                    printf("Rainha andou 1 casa para cima! \n");
                } break;
            case 'b':
                for(i = 0; i < casa; i++)
                {
                    printf("Rainha andou 1 casa para baixo! \n");
                } break;
            case 'c':
                for(i = 0; i < casa; i++)
                {
                    printf("Rainha andou 1 casa para esquerda!! \n");
                } break;
            case 'd':
                for(i = 0; i < casa; i++)
                {
                    printf("Rainha andou 1 casa para direita! \n");
                } break;
            }
    break;

case 4: {

int movimento1, movimento2, i = 1, j = 1;
char direcao1[20], direcao2[20];

    printf("### Lembre-se que o cavalo só pode se mover fazendo um movimento que resulta em um L (deve totalizar 3 casas) ### \n");
    printf("Digite quantas casas deseja andar no primeiro movimento: ");
    scanf("%d", &movimento1);
    printf("\nEscolha a direção na qual o cavalo se movimentará no primeiro movimento (Esquerda, Direita, Cima ou Baixo): ");
    scanf("%s", direcao1);
    getchar();

    printf("\nDigite quantas casas deseja andar no segundo movimento: ");
    scanf("%d", &movimento2);
    printf("\nEscolha a direção na qual o cavalo se movimentará no segundo movimento (Esquerda, Direita, Cima ou Baixo): ");
    scanf("%s", direcao2);
    getchar();

        if ((movimento1 == 2 && movimento2 == 1) || (movimento1 == 1 && movimento2 == 2))
        {

            for(i = 1; i <= movimento2; i++)
            {
                while (j <= movimento1)
                {
                printf("Cavalo se moveu 1 casa para %s!\n", direcao1);
                j++;
                }
            printf("Cavalo se moveu 1 casa(s) para %s!\n", direcao2);
             }
        } else
        {
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
    // Inclua o uso de continue e break dentro dos loops.