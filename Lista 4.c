#include <stdio.h>

// Fun��o que retorna o menor n�mero entre dois inteiros
int menorNumero(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    // Solicita ao usu�rio dois n�meros inteiros
    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);

    // Chama a fun��o e exibe o menor n�mero
    int menor = menorNumero(num1, num2);
    printf("O menor n�mero �: %d\n", menor);

    return 0;
}
