#include <stdio.h>

// Função que verifica se um número é par
int verificaPar(int num) {
    if (num % 2 == 0) {
        return 1;  // Número é par
    } else {
        return 0;  // Número é ímpar
    }
}

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Chama a função verificaPar e exibe o resultado
    if (verificaPar(numero)) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}
