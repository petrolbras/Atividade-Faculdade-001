#include <stdio.h>

int calcularArea(int base, int altura) {
    return base * altura;
}

int main() {
    int base, altura, area;

    printf("Digite o tamanho da base do retângulo: ");

    scanf("%d", &base);

    printf("Digite o tamanho da altura do retângulo: ");
    
    scanf("%d", &altura);

    area = calcularArea(base, altura);

    printf("Área do retângulo: %d\n", area);

    return 0;
}