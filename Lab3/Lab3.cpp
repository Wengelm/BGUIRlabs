#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(int argc, char* argv[])
{
	long double a, b, x, h, n, k, s, r, y, e, resmod;
	
	std::cout << "Input a\n";
	std::cin >> a;
	std::cout << "Input b\n";
	std::cin >> b;
	std::cout << "Input e\n";
	std::cin >> e;
	std::cout << "Input h\n";
	std::cin >> h;
	std::cout << "Input n\n";
	std::cin >> n;


	for (x = a; x <= b; x += h) {
		r = s = 1;
		for (k = 0; k <= n; k++) {
			if (k != 0) {
			r = cos(k * x) / k;
			s += r;
		}
			
		} 

		y = pow(e, cos(x)) * cos(sin(x));
		resmod = abs(y - s);

		std::cout << " x = " << x << "   Summ = " << s << "   Y(x) = " << y << "   |Y(x) - S(x)| = " << resmod<< "\n";


	}




}