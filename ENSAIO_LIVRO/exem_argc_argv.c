#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    printf("O nome do programa é %s\n", argv[0]);
    if (argc == 1) {
        printf("Nenhum argumento foi passado.\n");
    } else {
        printf("Os argumentos passados foram:\n");
        for (i = 1; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    }
    return 0;
}

