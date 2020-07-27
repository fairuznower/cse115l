#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>

int main()
{
	float radius, area, perimeter; 

	printf("Enter the radius: ");
	scanf("%f",&radius);

	area = 3.1416 * radius * radius;
	perimeter = 2 * 3.1416 * radius;

	printf("Area of the circle: %.1f\n", area);
	printf("Perimeter of the circle: %.1f\n", perimeter);
	
	return 0;
}