#include <stdio.h>

int main(void) {
    int numero;
    char continuar;

    do {
        printf("Digite um numero inteiro entre -1000 e 1000: ");

        if (scanf("%d", &numero) != 1 || numero < -1000 || numero > 1000) {
            puts("Numero invalido.");
            return 1;
        }

        for (int fator = 1; fator <= 10; fator++) {
            printf("%d x %d = %d\n", numero, fator, numero * fator);
        }

        printf("\nCalcular outra tabuada? (s/n): ");

        if (scanf(" %c", &continuar) != 1) {
            return 1;
        }
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
