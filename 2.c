#include <stdio.h> 

int main() { 

    int numero;      // Variável para o número lido 

    int antecessor;  // Variável para guardar o resultado da subtração 

    int sucessor;    // Variável para guardar o resultado da soma 

 

    printf("Digite um numero inteiro: "); 

    // Lendo o número digitado 

    scanf("%d", &numero); 

    // Processamento: calculando os valores 

    antecessor = numero - 1; 

    sucessor = numero + 1; 

    // Saída dos dados 

    printf("\nO numero digitado foi: %d\n", numero); 

    printf("Seu antecessor e: %d\n", antecessor); 

    printf("Seu sucessor e: %d\n", sucessor); 

    return 0; 

} 