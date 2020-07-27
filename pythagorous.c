#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>

int main()
{
	float base, hypotenuse; 
	float height, area;

	printf("Enter base: ");
	scanf("%f",&base);
	printf("Enter hypotenuse: ");
	scanf("%f", &hypotenuse);
	
	height = sqrt(pow(hypotenuse,2) - pow(base,2));
	area = 0.5 * base * height;

	printf("Height is %.2f\n", height);
	printf("Area is %.2f\n", area);
	
	return 0;
}