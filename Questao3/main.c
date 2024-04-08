#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int inicio;
    int fim;
    int pontosDiversao;
} Atividade;

int comparar(const void *a, const void *b) {
    Atividade *atividadeA = (const Atividade *)a;
    Atividade *atividadeB = (const Atividade *)b;

    if (atividadeA->inicio != atividadeB->inicio || atividadeA->fim != atividadeB->fim) {
        return atividadeA->fim - atividadeB->fim;
    } else {
        return atividadeB->pontosDiversao - atividadeA->pontosDiversao;
    }
}

void selecionarListaAtividades(Atividade *atividades, int quantidadeAtividades) {
    qsort(atividades, quantidadeAtividades, sizeof(Atividade), comparar);

    Atividade *selecionadas = (Atividade*)malloc(sizeof(Atividade)*quantidadeAtividades);

    int ultimaAtividadeSelecionada = 0;
    int contadorAtividades = 1;
    selecionadas[0] = atividades[0];

    for (int i = 1; i < quantidadeAtividades; i++) {
        if (atividades[i].inicio >= atividades[ultimaAtividadeSelecionada].fim) {
            selecionadas[contadorAtividades++] = atividades[i];
            ultimaAtividadeSelecionada = i;
        }
    }

    int totalPontos = 0;
    for (int i = 0; i < contadorAtividades; i++) {
        totalPontos += selecionadas[i].pontosDiversao;
    }

    printf("%d\n", totalPontos);
}

int main() {

    int quantidadeAtividades;
    scanf("%d", &quantidadeAtividades);


    Atividade *atividades = (Atividade*)malloc(sizeof(Atividade) * quantidadeAtividades);

    for(int numeroAtividade = 0; numeroAtividade < quantidadeAtividades; numeroAtividade++){
        scanf("%d %d %d", &atividades[numeroAtividade].inicio, &atividades[numeroAtividade].fim, &atividades[numeroAtividade].pontosDiversao);
    }

    selecionarListaAtividades(atividades, quantidadeAtividades);

    return 0;
}

