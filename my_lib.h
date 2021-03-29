#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <time.h>

//version 0.7

int input_int_number();
int get_int_number_on_positive();
int get_int_number_on_one_or_zero();
int get_int_number_than_greater_one();
int get_int_number_than_not_greater_min_and_not_less_max(const int min, const int max);
int get_int_rand_min_max(const int min, const int max);
int get_int_factorial(const int number);

double input_double_number();
double double_rand_min_max(const double min, const double max);
double get_double_number_than_greater_one();
double get_double_number_on_positive();
double get_double_number_than_not_greater_min_and_not_less_max(const double min, const double max);
double get_double_factorial(const double number);
