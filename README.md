[Exercicio_01](fibonacciSemMemo.c):Este exercício implementa a sequência de Fibonacci utilizando recursão simples. A função chama a si mesma para calcular os dois termos anteriores da sequência:

    fibonacci(n - 1) + fibonacci(n - 2)

Os casos base retornam 0 e 1, enquanto um contador registra a quantidade de chamadas recursivas realizadas durante a execução.

[Exercicio_02](fibonacciComMemo.c):Este exercício utiliza memoização para otimizar o cálculo da sequência de Fibonacci. Um vetor auxiliar chamado memo armazena valores já calculados para evitar repetições desnecessárias.

A memória do vetor é criada dinamicamente utilizando malloc:

    int *memo = (int *) malloc((n + 1) * sizeof(int));

Isso permite criar um vetor com tamanho definido em tempo de execução.

Antes de calcular um valor, o programa verifica se ele já foi salvo:

    if (memo[n] != -1)
    return memo[n];

Essa abordagem reduz significativamente a quantidade de chamadas recursivas e melhora o desempenho do algoritmo.

Ao final do programa, a memória alocada é liberada com:

    free(memo);

[Exercicio_03](torreHanoi.c):Este exercício resolve o problema clássico das Torres de Hanói utilizando recursão.

A função divide o problema em três etapas:

    hanoi(n - 1, origem, auxiliar, destino);

Move os discos menores para a torre auxiliar.

    printf("Mover disco %d...", n);

Move o maior disco para a torre destino.

    hanoi(n - 1, auxiliar, destino, origem);

Move os discos menores para a torre final.

O programa também contabiliza o número total de movimentos realizados.
