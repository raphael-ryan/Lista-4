#include <stdio.h>

// Fun��o que verifica se um n�mero � positivo
int lerNumeroPositivo() {
    int num;
    
    // Continua pedindo at� que um n�mero positivo seja inserido
    do {
        printf("Digite um n�mero inteiro positivo: ");
        scanf("%d", &num);
        
        if (num <= 0) {
            printf("N�mero inv�lido! O n�mero deve ser positivo.\n");
        }
    } while (num <= 0);
    
    return num;
}

// Fun��o que calcula a soma dos divisores do n�mero (exceto ele mesmo)
int SomaDivisores(int num) {
    int soma = 0;

    // Encontra os divisores de 1 at� num/2 (exceto o pr�prio n�mero)
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    
    return soma;
}

int main() {
    int numeros[5];

    // L� 5 n�meros inteiros positivos
    for (int i = 0; i < 5; i++) {
        numeros[i] = lerNumeroPositivo();
    }

    // Calcula e imprime a soma dos divisores de cada n�mero
    for (int i = 0; i < 5; i++) {
        int soma = SomaDivisores(numeros[i]);
        printf("A soma dos divisores de %d (exceto ele mesmo) �: %d\n", numeros[i], soma);
    }

    return 0;
}
