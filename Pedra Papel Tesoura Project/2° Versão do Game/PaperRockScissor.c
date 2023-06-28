#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#define MAX 5

int main()
{
    system("clear");
    
    struct player_t
    {
        char player_name[31];
        int vitorias;
        int derrotas;
    };
    struct player_t jogadores[5];
    
    int a; // Inicializando com valores as variáveis
    for (a = 0; a < 5; a++)
    {
        jogadores[a].vitorias = 0;
        jogadores[a].derrotas = 0;
        strcpy(jogadores[a].player_name, "");
    }

    int jogar = 1;
    int k = 0;

    while (jogar == 1 && k < MAX)// 1° Loop Principal
    {

        int jogar = 2;
        int escolha = -1;
        int jogada = 0;
        int jogada_computador = 0;

        printf("\n\n");
        printf("+---------- S E J A  B E M - V I N D O -----------+\n");
        printf("+      A 0  N O S S O  J O G O  D E  P E D R A    +\n");
        printf("+           P A P E L  E  T E S O U R A           +\n");
        printf("+-------------------------------------------------+\n");
        printf("+  Digite o seu nome: \n");
        scanf("%[^\n]s", jogadores[k].player_name);
        getchar();
        
        
        while (jogar == 2)// 2° Loop Principal
        {
            int i = 0;
            int score_jogador = 0;
            int score_computador = 0;
            int melhor_de_x = 0;

            printf("\n\n");
            system("clear");
            printf("+--------------------------------+\n");
            printf("+    Muito bem! %s         +\n", jogadores[k].player_name);
            printf("+  Vamos escolher a dificuldade! +\n");
            printf("+    1 - Facil                   +\n"); // Melhor de 3 Rodadas
            printf("+    2 - Medio                   +\n"); // Melhor de 5 Rodadas
            printf("+    3 - Dificil                 +\n"); // Melhor de 7 Rodadas
            printf("+    4 - ScoreBoards             +\n");
            printf("+    5 - Sair                    +\n");
            printf("+--------------------------------+\n");
            printf("Operacao: \n");
            scanf("%d", &escolha);
            getchar();
            

            printf("\n\n");

            switch (escolha)
            {
                case 1:
                {
                    melhor_de_x = 2;
                    jogar = 3;
                    break;
                }
                case 2:
                {
                    melhor_de_x = 3;
                    jogar = 3;
                    break;
                }
                case 3:
                {
                    melhor_de_x = 4;
                    jogar = 3;
                    break;
                }
                case 4:
                {
                    system("clear");
                    for (int i = 0; i < 4; i++)
                    {
                        for (int j = i + 1; j < 5; j++)
                        {
                            if (jogadores[i].vitorias < jogadores[j].vitorias)
                            {
                                struct player_t troca = jogadores[i];
                                jogadores[i] = jogadores[j];
                                jogadores[j] = troca;
                            }
                        }
                    }
    
                    printf("\n\n");
                    printf("+------------------------------------------+\n");
                    printf("+--------  BEM Vindo ao ScoreBoards -------+\n");
                    printf("+-                                        -+\n");
                    printf("+- NOME:          WINS:      LOSES:       -+\n");
    
                    for (int i = 0; i < MAX; i++)
                    {
                        printf("%-10s\t%9.2d\t%8.2d\n", jogadores[i].player_name, jogadores[i].vitorias, jogadores[i].derrotas);
                    }
                    printf("\n\n\n\n\n\n");
                    sleep(5);
                    jogar = 2;

                    break;
                }
    
                case 5:
                {
                    printf("Finalizando ...");
                    sleep(1);
                    system("clear");
                    exit(0);
                    break;
                }
    
                default:
                {
                    system("clear");
                    printf("Opção inválida!");
                    sleep(1);
                    system("clear");
                    jogar = 2;
                    break;
                }
            }
            
            while(jogar == 3)
            {
                while (score_jogador != melhor_de_x || score_computador != melhor_de_x) // Laço para Rodar O Jogo
                {
                    system("clear");
                    if(melhor_de_x == 0)
                    {
                        break;
                    }   
                        
                    printf("\n+------------ Rodada %d --------------+\n", i + 1);
                    printf("+----- %s %d x %d Computador -----+\n", jogadores[k].player_name, score_jogador, score_computador);

                    if (score_jogador == melhor_de_x || score_computador == melhor_de_x)
                    {
                        break;
                    }

                    printf("+--- Escolha a sua jogada %s ---+\n", jogadores[k].player_name);
                    printf("+- 1 - Pedra   ----------------------+\n");
                    printf("+- 2 - Papel   ----------------------+\n");
                    printf("+- 3 - Tesoura ----------------------+\n");
                    printf("+- Jogada: ");
                    scanf("%d", &jogada);
                    getchar();
                    printf("\n");

                    srand(time(NULL));
                    jogada_computador = rand() % 3 + 1;

                    if (jogada == jogada_computador)
                    {
                        printf("\n");
                        printf("+-----------------------------------------------------+\n");
                        printf("+---- Empate! Ambos colocaram o Mesmo Simbolo! !! ----+\n");
                        printf("+-----------------------------------------------------+\n\n");
                        sleep(2);
                        i--;
                    }
                    else if ((jogada == 1 && jogada_computador == 3))
                    {
                        printf("\n");
                        printf("+----------------------------------------------------+\n");
                        printf("+-- |Computador| = Tesoura -+-+- |%s| = Pedra --+\n", jogadores[k].player_name);
                        printf("+----------------------------------------------------+\n");
                        printf("+----------- |%s| GANHOU ESSA RODADA !! ---------+\n", jogadores[k].player_name);
                        printf("+----------- |Pois Pedra Quebra Tesoura| ------------+\n");
                        printf("+----------------------------------------------------+\n\n");
                        sleep(2);
                        score_jogador++;
                    }
                    else if ((jogada == 2 && jogada_computador == 1))
                    {
                        printf("\n");
                        printf("+----------------------------------------------------+\n");
                        printf("+-- |Computador| = Pedra -+-+- |%s| = Papel --+\n",jogadores[k].player_name);
                        printf("+----------------------------------------------------+\n");
                        printf("+----------- |%s| GANHOU ESSA RODADA !! --------+\n", jogadores[k].player_name);
                        printf("+----------- |Pois Papel Embrulha Pedra| ------------+\n");
                        printf("+----------------------------------------------------+\n\n");
                        sleep(2);
                        score_jogador++;
                    }
                    else if ((jogada == 3 && jogada_computador == 2))
                    {
                        printf("\n");
                        printf("+----------------------------------------------------+\n");
                        printf("+-- |Computador| = Papel -+-+- |%s| = Tesoura --+\n", jogadores[k].player_name);
                        printf("+----------------------------------------------------+\n");
                        printf("+----------- |%s| GANHOU ESSA RODADA !! ---------+\n", jogadores[k].player_name);
                        printf("+----------- |Pois Tesoura corta Papel| -------------+\n");
                        printf("+----------------------------------------------------+\n\n");
                        sleep(2);
                        score_jogador++;
                    }
                    else if (jogada_computador == 1 && jogada == 3)
                    {
                        printf("\n");
                        printf("+----------------------------------------------------+\n");
                        printf("+--- |Computador| = Pedra -+-+- |%s| = Tesoura ------+\n", jogadores[k].player_name);
                        printf("+----------------------------------------------------+\n");
                        printf("+-------- |Computador| GANHOU ESSA RODADA !! --------+\n");
                        printf("+----------- |Pois Pedra Quebra Tesoura| ------------+\n");
                        printf("+----------------------------------------------------+\n\n");
                        sleep(2);
                        score_computador++;
                    }
                    else if (jogada_computador == 2 && jogada == 1)
                    {
                        printf("\n");
                        printf("+----------------------------------------------------+\n");
                        printf("+-- |Computador| = Papel -+-+- |%s| = Pedra --+\n", jogadores[k].player_name);
                        printf("+----------------------------------------------------+\n");
                        printf("+-------- |Computador| GANHOU ESSA RODADA !! --------+\n");
                        printf("+----------- |Pois Papel Embrulha Pedra| ------------+\n");
                        printf("+----------------------------------------------------+\n\n");
                        sleep(2);
                        score_computador++;
                    }
                    else if (jogada_computador == 3 && jogada == 2)
                    {
                        printf("\n");
                        printf("+----------------------------------------------------+\n");
                        printf("+-- |Computador| = Tesoura -+-+- |%s| = Papel --+\n", jogadores[k].player_name);
                        printf("+----------------------------------------------------+\n");
                        printf("+-------- |Computador| GANHOU ESSA RODADA !! --------+\n");
                        printf("+----------- |Pois Tesoura Corta Papel| -------------+\n");
                        printf("+----------------------------------------------------+\n\n");
                        sleep(2);
                        score_computador++;
                    }

                    i++;
                }

                // Verificando Quem Ganhou
                if (score_jogador == melhor_de_x && score_jogador != 0)
                {
                    printf("\n\n");
                    printf("+-----------------------------------------------------+\n");
                    printf("+------ Parabéns %s , VOCÊ GANHOU O JOGO ------+\n", jogadores[k].player_name);
                    printf("+---------------- %s +1 Vitoria -----------------+\n", jogadores[k].player_name);
                    printf("+-----------------------------------------------------+\n\n");
                    jogadores[k].vitorias += 1;
                }
                else if (score_computador == melhor_de_x && score_computador != 0)
                {
                    printf("\n\n");
                    printf("+-----------------------------------------------------+\n");
                    printf("+------ Deu Ruim!! O Computador Ganhou o Jogo --------+\n");
                    printf("+---------------- %s +1 Derrota ----------------------+\n", jogadores[k].player_name);
                    printf("+-----------------------------------------------------+\n\n");
                    jogadores[k].derrotas += 1;
                }

                int opcao_recomecar = -1;
                printf("\n\n");
                printf("+--------------------------------------+\n");
                printf("+-        Muito bem! %s          -+\n", jogadores[k].player_name);
                printf("+- 1 - Retornar Para O Menu Principal -+\n");
                printf("+- 2 - Novo Jogador                     -+\n");
                printf("+- 0 - Sair Do Jogo                   -+\n");
                printf("+--------------------------------------+\n");
                printf("+- Operacao:");
                scanf("%d", &opcao_recomecar);
                getchar();
                printf("\n");

                switch (opcao_recomecar)
                {
                    case 1:
                    {
                        system("clear");
                        jogar = 2;
                        break;
                    }
                    case 2:
                    {
                        jogar = 1;
                        k += 1;
                        system("clear");
                        break;
                    }
                    case 0:
                    {
                        printf("Finalizando ...");
                        sleep(1);
                        system("clear");
                        exit(0);
                        break;
                    }
                    default:
                    {
                        system("clear");
                        printf("Opção inválida!");
                        sleep(1);
                        system("clear");
                        jogar = 3;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
