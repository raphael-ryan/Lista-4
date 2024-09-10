#include <stdio.h>

// Função que verifica se um número é positivo
int lerNumeroPositivo() {
    int num;
    
    // Continua pedindo até que um número positivo seja inserido
    do {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);
        
        if (num <= 0) {
            printf("Número inválido! O número deve ser positivo.\n");
        }
    } while (num <= 0);
    
    return num;
}

// Função que calcula a soma dos divisores do número (exceto ele mesmo)
int SomaDivisores(int num) {
    int soma = 0;

    // Encontra os divisores de 1 até num/2 (exceto o próprio número)
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    
    return soma;
}

int main() {
    int numeros[5];

    // Lê 5 números inteiros positivos
    for (int i = 0; i < 5; i++) {
        numeros[i] = lerNumeroPositivo();
    }

    // Calcula e imprime a soma dos divisores de cada número
    for (int i = 0; i < 5; i++) {
        int soma = SomaDivisores(numeros[i]);
        printf("A soma dos divisores de %d (exceto ele mesmo) é: %d\n", numeros[i], soma);
    }

    return 0;
}
