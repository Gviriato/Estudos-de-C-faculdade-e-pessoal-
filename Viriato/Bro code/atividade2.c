#include <stdio.h>
#include <math.h>

int main() {
    double raio = 0.0, area = 0.0, surface_area = 0.0, volume = 0.0;
    const double pi = 3.14159265358979323846;

    printf("Insira o valor do raio do area e de: ");
    scanf("%lf", &raio);

    area = pi * pow(raio, 2);
    surface_area = 4*pi * pow(raio, 2);
    volume = (4.0 / 3.0) * pi * pow(raio, 3);

    printf("%lf\n", area);
    printf("%lf\n", surface_area);
    printf("%lf\n", volume);

    return 0;
}
