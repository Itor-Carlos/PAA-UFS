#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ATIVIDADES 20 
#define MAX_TEMPO 24 

typedef struct {
    int inicio;
    int fim;
    int pontosDiversao;
} Atividade;

void gerarEntradaAleatoria() {
    int quantidadeAtividades = rand() % MAX_ATIVIDADES + 1; 

    printf("%d\n", quantidadeAtividades);
    for (int i = 0; i < quantidadeAtividades; i++) {
        int inicio = rand() % MAX_TEMPO;
        int duracao = rand() % (MAX_TEMPO - inicio) + 1;
        int pontos = rand() % 10 + 1;

        printf("%d %d %d\n", inicio, inicio + duracao, pontos);
    }
}

int main() {
    srand(time(NULL));

    gerarEntradaAleatoria();

    return 0;
}
