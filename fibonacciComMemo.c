#include <stdio.h>
#include <stdlib.h>

long long chamadasSemMemo = 0;
long long chamadasMemo = 0;

int fibonacciSemMemo(int n) {
    chamadasSemMemo++;

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacciSemMemo(n - 1) + fibonacciSemMemo(n - 2);
}

int fibonacciMemo(int n, int *memo) {
    chamadasMemo++;

    if (memo[n] != -1)
        return memo[n];

    if (n == 0)
        memo[n] = 0;
    else if (n == 1)
        memo[n] = 1;
    else
        memo[n] = fibonacciMemo(n - 1, memo) + fibonacciMemo(n - 2, memo);

    return memo[n];
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int *memo = (int *) malloc((n + 1) * sizeof(int));

    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }

    int resultadoSemMemo = fibonacciSemMemo(n);
    int resultadoMemo = fibonacciMemo(n, memo);

    printf("\n--- Versao Sem Memoizacao ---\n");
    printf("Resultado: %d\n", resultadoSemMemo);
    printf("Chamadas recursivas: %lld\n", chamadasSemMemo);

    printf("\n--- Versao com Memoizacao ---\n");
    printf("Resultado: %d\n", resultadoMemo);
    printf("Chamadas recursivas: %lld\n", chamadasMemo);

    free(memo);

    return 0;
}