#include <stdio.h>

// Função que calcula base^expoente
int potencia(int base, int expoente) {
    int resultado = 1;
    
    // Multiplica a base por ela mesma expoente vezes
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    
    return resultado;
}

int main() {
    int base, expoente;

    // Solicita ao usuário a base e o expoente
    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente (inteiro >= 1): ");
    scanf("%d", &expoente);

    // Chama a função potencia e exibe o resultado
    int resultado = potencia(base, expoente);
    printf("%d elevado a %d é: %d\n", base, expoente, resultado);

    return 0;
}
