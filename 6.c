#include <stdio.h>

int main() {
    float raio, area;
    const float PI = 3.14159; // Definindo uma constante para o Pi

    printf("--- Calculo da Area do Circulo ---\n");

    // 1. Entrada de dados
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    // 2. Processamento (Calculo)
    // Raio ao quadrado e o mesmo que raio vezes raio
    area = PI * (raio * raio);

    // 3. Saida de dados
    printf("\nA area do circulo com raio %.2f e: %.4f\n", raio, area);

    return 0;
}