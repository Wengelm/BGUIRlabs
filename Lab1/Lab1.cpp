#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(int argc, char* argv[])
{
	long double x, y, z, resultat, a, b, c;
	std::cout << "Input X\n";
	std::cin >> x;
	std::cout << "Input Y\n";
	std::cin >> y;
	std::cout << "Input Z\n";
	std::cin >> z; 
	
	a = log(pow(y, -sqrt(abs(x))));
	b = (x - y / 2);
	c = pow(sin(atan(z)), 2);

	resultat = a * b + c;

	std::cout <<"Resultat = " << resultat;
}