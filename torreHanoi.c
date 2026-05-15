#include <stdio.h>

long long movimentos = 0;

void hanoi(int n, char origem, char destino, char auxiliar) {

    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        movimentos++;
        return;
    }

    hanoi(n - 1, origem, auxiliar, destino);

    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    movimentos++;

    hanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int discos;

    printf("Digite a quantidade de discos: ");
    scanf("%d", &discos);

    hanoi(discos, 'A', 'C', 'B');

    printf("\nTotal de movimentos: %lld\n", movimentos);

    return 0;
}