#include <stdio.h>

// Função que retorna o menor número entre dois inteiros
int menorNumero(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    // Solicita ao usuário dois números inteiros
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Chama a função e exibe o menor número
    int menor = menorNumero(num1, num2);
    printf("O menor número é: %d\n", menor);

    return 0;
}
