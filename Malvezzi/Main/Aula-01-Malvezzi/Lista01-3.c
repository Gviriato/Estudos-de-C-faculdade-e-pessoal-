#include <stdio.h>
#include <stdlib.h>

int main() {
	float n1, n2, n3, p1, p2, p3, total_p, media;
	printf("Digite as tres notas: ");
	scanf("%f %f %f", &n1, &n2, &n3);

	printf("Digite os respectivos pesos:");
	scanf("%f %f %f", &p1, &p2, &p3);
	total_p = (p1 + p2 + p3);

	media = ((n1*p1) + (n2*p2) + (n3*p3))/total_p;

	printf("A media e: %.2f\n", media);

	return 0;
}
