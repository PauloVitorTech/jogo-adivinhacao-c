#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto;
    int palpite;
    int tentativas = 0;
    int limiteTentativas;
    int nivel;

    // Semente para gerar números aleatórios baseados no relógio do PC
    srand(time(NULL));
    // Gera um número secreto entre 1 e 100
    numeroSecreto = (rand() % 100) + 1;

    printf("=========================================\n");
    printf("     BEM-VINDO AO JOGO DE ADIVINHACAO    \n");
    printf("=========================================\n");
    printf("Tente adivinhar o numero secreto entre 1 e 100!\n\n");

    // Seleção de Dificuldade
    printf("Escolha o nível de dificuldade:\n");
    printf("1 - Facil (15 tentativas)\n");
    printf("2 - Medio (10 tentativas)\n");
    printf("3 - Dificil (5 tentativas)\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    switch (nivel) {
        case 1:
            limiteTentativas = 15;
            break;
        case 3:
            limiteTentativas = 5;
            break;
        default:
            limiteTentativas = 10; // Médio como padrão se digitar errado
            printf("Nivel invalido. Modo Medio selecionado por padrao.\n");
            break;
    }

    printf("\nJogo iniciado! Voce tem %d tentativas.\n", limiteTentativas);

    // Loop do jogo
    do {
        tentativas++;
        printf("\nTentativa %d de %d. Digite seu palpite: ", tentativas, limiteTentativas);
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) {
            printf("Palpite invalido! O numero esta entre 1 e 100.\n");
            tentativas--; // Não penaliza o jogador por digitar fora do limite
            continue;
        }

        if (palpite == numeroSecreto) {
            printf("\n🎉 PARABENS! Voce acertou em %d tentativas!\n", tentativas);
            break;
        } else if (palpite < numeroSecreto) {
            printf("O numero secreto e MAIOR que %d.\n", palpite);
        } else {
            printf("O numero secreto e MENOR que %d.\n", palpite);
        }

        if (tentativas == limiteTentativas) {
            printf("\n💥 Fim de jogo! Suas tentativas acabaram.\n");
            printf("O numero secreto era: %d\n", numeroSecreto);
        }

    } while (tentativas < limiteTentativas);

    return 0;
}
