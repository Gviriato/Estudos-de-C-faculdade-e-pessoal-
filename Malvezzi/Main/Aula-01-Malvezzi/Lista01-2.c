#include <stdio.h>
#include <stdlib.h>

int main() {
	float n1, n2, n3, media;

	printf("Digite suas tres notas: ");

	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);

	media = (n1+n2+n3)/3;

	printf("A media: %.2f\n", media);

	return 0;
}
