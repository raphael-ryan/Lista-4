#include <stdio.h>

// Função que verifica se o número é positivo, negativo ou zero
int verificaSinal(int num) {
    if (num > 0) {
        return 1;  // Número é positivo
    } else if (num < 0) {
        return -1; // Número é negativo
    } else {
        return 0;  // Número é zero
    }
}

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Chama a função verificaSinal e exibe o resultado
    int resultado = verificaSinal(numero);
    
    if (resultado == 1) {
        printf("O número %d é positivo.\n", numero);
    } else if (resultado == -1) {
        printf("O número %d é negativo.\n", numero);
    } else {
        printf("O número %d é zero.\n", numero);
    }

    return 0;
}
