#include <stdio.h>

// Fun��o que calcula a m�dia aritm�tica
float mediaAritmetica(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

// Fun��o que calcula a m�dia ponderada
float mediaPonderada(float n1, float n2, float n3) {
    return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
}

// Fun��o que calcula a m�dia harm�nica
float mediaHarmonica(float n1, float n2, float n3) {
    return 3 / ((1/n1) + (1/n2) + (1/n3));
}

// Fun��o principal que calcula a m�dia com base na letra fornecida
float calcularMedia(float n1, float n2, float n3, char tipo) {
    switch (tipo) {
        case 'A':
            return mediaAritmetica(n1, n2, n3);
        case 'P':
            return mediaPonderada(n1, n2, n3);
        case 'H':
            return mediaHarmonica(n1, n2, n3);
        default:
            printf("Tipo inv�lido! Use 'A' para m�dia aritm�tica, 'P' para m�dia ponderada ou 'H' para m�dia harm�nica.\n");
            return -1;
    }
}

int main() {
    float nota1, nota2, nota3;
    char tipo;

    // Solicita as tr�s notas do aluno
    printf("Digite as tr�s notas do aluno:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    // Solicita o tipo de m�dia que deseja calcular
    printf("Digite 'A' para m�dia aritm�tica, 'P' para m�dia ponderada ou 'H' para m�dia harm�nica: ");
    scanf(" %c", &tipo);

    // Calcula e exibe a m�dia conforme o tipo informado
    float media = calcularMedia(nota1, nota2, nota3, tipo);
    
    if (media != -1) {
        printf("A m�dia calculada �: %.2f\n", media);
    }

    return 0;
}
