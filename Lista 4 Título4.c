#include <stdio.h>

// Função que retorna o valor absoluto de um número
int Absoluto(int num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

int main() {
    int numeros[5];

    // Solicita ao usuário que insira 5 números inteiros
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Imprime o valor absoluto de cada número
    printf("Valores absolutos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor absoluto de %d é: %d\n", numeros[i], Absoluto(numeros[i]));
    }

    return 0;
}
