
#include <stdio.h>
#include "file_utils.h"

void display_menu() {
    printf("\n=== Menu ===\n");
    printf("1. Ver ficheiro 'situacao_Escolar_Estudantes.txt'\n");
    printf("2. Ver ficheiro 'estudantes.txt'\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    int option;

    do {
        display_menu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                show_file_content("Situacao_Escolar_Estudante.txt");
                break;
            case 2:
                show_file_content("Estudantes.txt");
                break;
            case 3:
                printf("A sair do programa...\n");
                break;
            default:
                printf("Opção inválida. Por favor, tente novamente.\n");
        }
    } while (option != 3);

    return 0;
}
