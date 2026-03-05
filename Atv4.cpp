#include <stdio.h>
#include <stdlib.h> // Necessário para malloc e free

int main() {
    int qtd;
    int *matriculas;

    // 1. Pede ao usuário a quantidade de alunos
    printf("Digite a Quantidade de Alunos: ");
    scanf("%d", &qtd);

    // Validação básica para evitar alocação de tamanho zero ou negativo
    if (qtd <= 0) {
        printf("Quantidade invalida. O evento foi cancelado.\n");
        return 1;
    }

    // 2. Cria um array dinâmico com o tamanho exato necessário
    matriculas = (int *)malloc(qtd * sizeof(int));

    // Sempre verifique se o sistema operacional conseguiu alocar a memória
    if (matriculas == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    // 3. Preenche o array com as matrículas usando um laço for
    // Vamos começar as matrículas a partir do número 1000
    for (int i = 0; i < qtd; i++) {
        matriculas[i] = 1000 + i; 
    }

    

    // 4. Imprime as matrículas cadastradas
    printf("\n--- Lista de Presenca do Evento ---\n");
    for (int i = 0; i < qtd; i++) {
        printf("Aluno %d - Matricula: %d\n", i + 1, matriculas[i]);
    }
    printf("-----------------------------------\n");

    // 5. Libera a memória de volta para o sistema
    free(matriculas);

    return 0;
}