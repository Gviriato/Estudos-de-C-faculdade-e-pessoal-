#include <stdio.h>

int main() {
        double pes = 0.0, polegada = 0.0, jarda = 0.0, milha = 0.0;
        printf("Coloque a medida em pes: ");
        scanf("%lf", &pes);

        polegada = pes * 12;
        jarda = pes / 3;;
        milha = jarda / 1760.0;

        printf("Sua medida em polegadas e: %.2lf\n", polegada);
        printf("Sua medida em jardas e: %.2lf\n", jarda);
        printf("Sua medida em milhas e: %.2lf\n", milha);

        return 0;
}
