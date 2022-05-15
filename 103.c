#include <stdio.h>

int main() {
	float principal;
	float time;
	float interest;

	printf("Enter a principal value:\n");
	scanf("%f", &principal);

	printf("Enter the time in years:\n");
	scanf("%f", &time);

	printf("Enter a interest value in percent:\n");
	scanf("%f", &interest);

	float si = principal * time * interest/100;
	printf("Your interest is %f\n", si);



	printf("Total amount after %g years is %f\n", time, principal+si);
	return 0;
}
