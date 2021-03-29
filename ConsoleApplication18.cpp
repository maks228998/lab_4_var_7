#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include "my_lib.h"
#include <math.h>

int main() {
	printf("Calculation: sin (X)\n");
	printf("             -------\n");
	printf("                X   \n");

	printf("Enter X\n");
	double number_x = get_double_number_than_greater_min_and_less_max(0, 1024);
	const int const_n = 4;
	double result = 1.0;

	for (int counter = 1; counter < const_n + 1; counter++) {
		double numerator = pow(-1, counter) * pow(number_x, 2 * counter);
		double denominator = get_int_factorial(2 * counter + 1);
		result = result + numerator / denominator;
	}
	printf("Result: %lf \n", result);
}
