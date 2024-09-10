#include <stdio.h>

// Função que calcula a média aritmética
float mediaAritmetica(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

// Função que calcula a média ponderada
float mediaPonderada(float n1, float n2, float n3) {
    return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
}

// Função que calcula a média harmônica
float mediaHarmonica(float n1, float n2, float n3) {
    return 3 / ((1/n1) + (1/n2) + (1/n3));
}

// Função principal que calcula a média com base na letra fornecida
float calcularMedia(float n1, float n2, float n3, char tipo) {
    switch (tipo) {
        case 'A':
            return mediaAritmetica(n1, n2, n3);
        case 'P':
            return mediaPonderada(n1, n2, n3);
        case 'H':
            return mediaHarmonica(n1, n2, n3);
        default:
            printf("Tipo inválido! Use 'A' para média aritmética, 'P' para média ponderada ou 'H' para média harmônica.\n");
            return -1;
    }
}

int main() {
    float nota1, nota2, nota3;
    char tipo;

    // Solicita as três notas do aluno
    printf("Digite as três notas do aluno:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    // Solicita o tipo de média que deseja calcular
    printf("Digite 'A' para média aritmética, 'P' para média ponderada ou 'H' para média harmônica: ");
    scanf(" %c", &tipo);

    // Calcula e exibe a média conforme o tipo informado
    float media = calcularMedia(nota1, nota2, nota3, tipo);
    
    if (media != -1) {
        printf("A média calculada é: %.2f\n", media);
    }

    return 0;
}
