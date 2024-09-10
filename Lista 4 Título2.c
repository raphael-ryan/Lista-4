#include <stdio.h>
#include <math.h>

// Fun��o que calcula e retorna a dist�ncia euclidiana entre dois pontos
float calcularDistancia(float x1, float y1, float x2, float y2) {
    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distancia;
}

int main() {
    float x1, y1, x2, y2;

    // Solicita ao usu�rio as coordenadas dos dois pontos
    printf("Digite as coordenadas do ponto 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do ponto 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calcula a dist�ncia euclidiana entre os dois pontos
    float distancia = calcularDistancia(x1, y1, x2, y2);
    printf("A dist�ncia euclidiana entre os dois pontos �: %.2f\n", distancia);

    return 0;
}
