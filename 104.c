#include <stdio.h>

int main() {
	float far;
	float cel;

	printf("Enter the temperature value in fahrenheit: ");
	scanf("%f", &far);

	cel = (far - 32)*5/9;
	printf("The temperature in celsius : %f\n", cel);
}
