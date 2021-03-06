// Quadratic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cassert>



int main()
{
	double a{};
	double b{};
	double c{};

	std::cout << "Enter a value for a: ";
	std::cin >> a;
	std::cout << "Enter a value for b: ";
	std::cin >> b;
	std::cout << "Enter a value for c: ";
	std::cin >> c;

	double discriminant{};
	double square_root_d{};
	double sum_numerator_simplified{};
	double diff_numerator_simplified{};
	double denominator{};

	discriminant = b * b - 4 * a * c;
	assert(discriminant >= 0);
	square_root_d = sqrt(discriminant);
	sum_numerator_simplified = (-b + square_root_d);
	diff_numerator_simplified = (-b - square_root_d);
	denominator = 2 * a;

	double solution1{};
	double solution2{};
	solution1 = sum_numerator_simplified / denominator;
	solution2 = diff_numerator_simplified / denominator;

	std::cout << solution1 << "," << solution2 << std::endl;

    return 0;
}

