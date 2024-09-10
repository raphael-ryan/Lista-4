#include <stdio.h>

// Fun��o que retorna o valor absoluto de um n�mero
int Absoluto(int num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

int main() {
    int numeros[5];

    // Solicita ao usu�rio que insira 5 n�meros inteiros
    printf("Digite 5 n�meros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Imprime o valor absoluto de cada n�mero
    printf("Valores absolutos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor absoluto de %d �: %d\n", numeros[i], Absoluto(numeros[i]));
    }

    return 0;
}
