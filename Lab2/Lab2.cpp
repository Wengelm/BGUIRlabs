#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(int argc, char* argv[])
{
	long double a, b, e, z, x, y;
	int fx;
	std::cout << "Input a\n";
	std::cin >> a;
	std::cout << "Input b\n";
	std::cin >> b;
	std::cout << "Input e\n";
	std::cin >> e;
	std::cout << "Input Z\n";
	std::cin >> z;

	if (z < -1) {
		
		x = -z / 3;
		
	}
	else if (z >= -1) {
		
		x = abs(z);
		
	}
	

	std::cout << "Select function f(x):\n";
	std::cout << "0 - 2x\n";
	std::cout << "1 - pow(x,2)\n";
	std::cout << "2 - x / 3\n";
	std::cin >> fx;

	switch (fx)
	{
	case 0:
		
		y = a * 2 * x - log((x + 2,5)) + b *(pow(e,x) - pow(e, -x));
	case 1:
		
		y = a * pow(x,2) - log((x + 2, 5)) + b * (pow(e, x) - pow(e, -x));
	case 2: 
		y = a * x / 3 - log((x + 2, 5)) + b * (pow(e, x) - pow(e, -x));

	default:
		break;
	}




	if (z < -1) {
		std::cout << "x = -z / 3\n";
		std::cout << "x = " << x << "\n";
	}
	else if (z >= -1) {
		std::cout << "x = |z|\n";
		std::cout << "x = " << x << "\n";
	}


	if (fx = 0) {
		std::cout << "Selected function 2x\n";
		std::cout << "Y = " << y;
	}
	else if (fx = 1) {
		std::cout << "Selected function pow(x,2)\n";
		std::cout << "Y = " << y;
	}
	else if (fx = 2) {
		std::cout << "Selected function x / 3\n";
		std::cout << "Y = " << y;
	}
	
}