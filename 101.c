#include <stdio.h>

int main() {
	int a;
	printf("Enter an integer:\n");
	scanf("%d", &a);
	printf("%d\n\n", a);

	float b;
	printf("Enter a floating value:\n");
	scanf("%f", &b);
	printf("%g\n\n", b);

	float c;
	printf("Enter a floating value:\n");
	scanf("%f", &c);
  	float tmp = ((int)(100*c));
	printf("%.2f\n\n", tmp/100);

	float d;
	printf("Enter a floating value:\n");
	scanf("%f", &d);
  	float tmp1 = ((int)(100*d));
	printf("%.2f\n\n", tmp1/100);

	float e;
	printf("Enter a floating value:\n");
	scanf("%f", &e);
	printf("%f\n\n", e*e);

	char fname[100];
	char lname[100];
	printf("Enter your name:\n");
	scanf("%s %s", fname, lname);
	printf("%s %s\n\n", fname, lname);

	char college[15];
 char college1[15];
 char college2[15];
 char college3[15];
 char college4[15];
 char college5[15];
 char college6[15];
 printf("Enter your college name:\n");
 scanf("%s %s %s %s %s %s %s", college, college1, college2, college3, college4,   college5, college6);
	 printf("%s %s %s %s %s %s %s\n\n", college, college1,  college2, college3, college4, college5, college6);
}
