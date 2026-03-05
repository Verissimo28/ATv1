#include <stdio.h>
#include <stdlib.h>

struct Departamento {
    int id_departamento;
    int qtd_funcionarios;
    int *matriculas_funcionarios; 
};

int main() {
    struct Departamento ti;

    ti.id_departamento = 404;
    printf("Departamento TI (ID: %d)\n", ti.id_departamento);
    printf("Quantos funcionarios trabalham na TI hoje? ");
    scanf("%d", &ti.qtd_funcionarios);

    ti.matriculas_funcionarios = (int *)malloc(ti.qtd_funcionarios * sizeof(int));

    if (ti.matriculas_funcionarios == NULL) {
        printf("Erro: Memoria insuficiente para o departamento de TI.\n");
        return 1;
    }

    for (int i = 0; i < ti.qtd_funcionarios; i++) {
        ti.matriculas_funcionarios[i] = (ti.id_departamento * 100) + i;
    }

    printf("\nRelatorio do Departamento %d:\n", ti.id_departamento);
    for (int i = 0; i < ti.qtd_funcionarios; i++) {
        printf("Funcionario %d - Matricula: %d\n", i + 1, ti.matriculas_funcionarios[i]);
    }


    free(ti.matriculas_funcionarios);
    
    ti.matriculas_funcionarios = NULL;

    printf("\nMemoria das matriculas liberada com sucesso.\n");

    return 0;
}