#include <stdio.h>

int main() {
	float radius;
	printf("Enter radius value:\n");
	scanf("%f", &radius);

	float area = 3.141592*radius*radius;
	printf("Area of circle : %f\n", area);

	return 0;
}
