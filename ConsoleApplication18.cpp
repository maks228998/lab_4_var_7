#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include "my_lib.h"
#include <math.h>

int main() {

	printf("Calculation: sin (X)\n");
	printf("             -------\n");
	printf("                X   \n");

	printf("Enter X\n");
	double number_x = input_double_number();
	const int const_n = 8;
	double result = 0.0;

	for (double counter = 0; counter < const_n + 1; counter++) {
		double denominator = 1.0;
		double numerator = pow(-1, counter) * pow(number_x, 2 * counter);

		for (double counter_two = 1; counter_two < (2 * counter) + 2; counter_two++) {

			denominator = denominator * counter_two;

		}

		result = result + numerator / denominator;

	}
	printf("Result: %lf \n", result);
}