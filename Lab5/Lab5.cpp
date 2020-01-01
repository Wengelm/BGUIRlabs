#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int n, f;
	
	int resultat = 0;
	
	std::cout << "Input n\n";
	std::cin >> n;

	int *mas = new int[n];


	std::cout << "Input mode\n";
	std::cout << "1 - Randomize\n";
	std::cout << "2 - Manual\n";
	std::cin >> f;

	if (f == 1) {
		for (int i = 0; i < n; i++) {
			mas[i] = rand() % 11;
		}
	}
	else if (f == 2) {
		for (int i = 0; i < n; i++) {
			std::cout << "Input element massiva " << i <<"\n";
			std::cin >> mas[i];
		}
	}


	for (int i = 0; i < n; i++) {
		std::cout << "Element massiva " << i << " = " << mas[i] << "\n";
	}
	
	int zero_one = -1, zero_two = -1;

	for (int k = 0; k < n; k++) {

		if (mas[k] == 0) {
			zero_one = k;
			break;
		}

	}
	if (zero_one < 0) {
		std::cout << "No zeros\n";
	}

	for (int j = zero_one + 1; j < n; j++) {
		if (mas[j] == 0) {
			zero_two = j;
			break;
		}
	}

		if (zero_two < 0) {
			std::cout << "No two zeros\n";
		
		}


		for (int i = zero_one + 1; i < zero_two; i++) {
			resultat += mas[i];

		}

		std::cout << "Resultat = " << resultat;

		return 0;
	}




	



