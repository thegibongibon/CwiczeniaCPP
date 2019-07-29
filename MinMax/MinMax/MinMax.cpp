

#include <iostream>

int main()
{
	int tablica[5];
	int max;
	std::cout << "Podaj piec liczb do tablicy, pokaze Ci, ktora liczba jest najwieksza: " << std::endl;
	for (int i = 0; i <= 4; i++)
	{
		std::cout << "Element[" << i << "]: ";
		std::cin >> tablica[i];
	}
	max = tablica[0];
	for (int i = 0; i <= 4; i++)
	{
		if (tablica[i] > max)
			max = tablica[i];
	}
	std::cout << "\n najwieksza liczba w tablicy to : " << max << std::endl;

}


