#include <stdio.h>

int main()
{
	float a, b, media;

	scanf("%f%f", &a, &b);

	media=(a*3.5+b*7.5)/(3.5+7.5);

	printf("MEDIA = %.5f\n", media);

	return 0;
}