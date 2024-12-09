
//void load_students(const char *filename, Student *students, int *count);
//void load_situations(const char *filename, Situation *situations, int *count);

#include <stdio.h>
#include <stdlib.h>

// Função para exibir o conteúdo de um ficheiro
void show_file_content(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Erro ao abrir o ficheiro: %s\n", filename);
        return;
    }

    char line[256];
    printf("\nConteúdo do ficheiro '%s':\n", filename);
    printf("--------------------------------------------------\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    printf("--------------------------------------------------\n");

    fclose(file);
}
