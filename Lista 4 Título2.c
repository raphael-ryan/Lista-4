#include <stdio.h>
#include <math.h>

// Função que calcula e retorna a distância euclidiana entre dois pontos
float calcularDistancia(float x1, float y1, float x2, float y2) {
    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distancia;
}

int main() {
    float x1, y1, x2, y2;

    // Solicita ao usuário as coordenadas dos dois pontos
    printf("Digite as coordenadas do ponto 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do ponto 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calcula a distância euclidiana entre os dois pontos
    float distancia = calcularDistancia(x1, y1, x2, y2);
    printf("A distância euclidiana entre os dois pontos é: %.2f\n", distancia);

    return 0;
}
