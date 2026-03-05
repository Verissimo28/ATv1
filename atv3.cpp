#include <stdio.h>
#include <stdlib.h> 

int main() {
    int *protocolo_urgente;

    protocolo_urgente = (int *)malloc(sizeof(int));

    if (protocolo_urgente == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1; 
    }

    *protocolo_urgente = 999;

    printf("O valor do protocolo urgente eh: %d\n", *protocolo_urgente);

    free(protocolo_urgente);

    return 0;
}