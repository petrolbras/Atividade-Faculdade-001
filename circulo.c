#define _USE_MATH_DEFINES
#include <stdio.h>
#include <libavutil/mathematics.h>

int main() {
    double area, raio;

    printf("Digite o raio do círculo: ");

    scanf("%lf", &raio);

    area = M_PI * raio * raio;

    printf("O valor da área do círculo é: %lf\n", area);

    return 0;
}