#include <stdio.h>

int main() {
    float cm, polegadas; // Variáveis para números com vírgula

    printf("--- Conversor de Medidas ---\n");

    // 1. Entrada de dados
    printf("Digite o valor em centimetros (cm): ");
    scanf("%f", &cm);

    // 2. Processamento (Calculo)
    polegadas = cm / 2.54;

    // 3. Saida de dados
    printf("\n%.2f cm equivalem a %.2f polegadas.\n", cm, polegadas);

    return 0;
}