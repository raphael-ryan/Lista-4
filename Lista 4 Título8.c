#include <stdio.h>

// Fun��o que verifica se o n�mero � positivo, negativo ou zero
int verificaSinal(int num) {
    if (num > 0) {
        return 1;  // N�mero � positivo
    } else if (num < 0) {
        return -1; // N�mero � negativo
    } else {
        return 0;  // N�mero � zero
    }
}

int main() {
    int numero;

    // Solicita ao usu�rio que insira um n�mero inteiro
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Chama a fun��o verificaSinal e exibe o resultado
    int resultado = verificaSinal(numero);
    
    if (resultado == 1) {
        printf("O n�mero %d � positivo.\n", numero);
    } else if (resultado == -1) {
        printf("O n�mero %d � negativo.\n", numero);
    } else {
        printf("O n�mero %d � zero.\n", numero);
    }

    return 0;
}
