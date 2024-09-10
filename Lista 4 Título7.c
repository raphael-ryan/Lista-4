#include <stdio.h>

// Fun��o que verifica se um n�mero � par
int verificaPar(int num) {
    if (num % 2 == 0) {
        return 1;  // N�mero � par
    } else {
        return 0;  // N�mero � �mpar
    }
}

int main() {
    int numero;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Chama a fun��o verificaPar e exibe o resultado
    if (verificaPar(numero)) {
        printf("O n�mero %d � par.\n", numero);
    } else {
        printf("O n�mero %d � �mpar.\n", numero);
    }

    return 0;
}
