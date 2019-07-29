
#include <iostream>

int main()
{
	int rok;
	std::cout << "podaj rok \n ?";
	std::cin >> rok;

	if (rok % 400 == 0)
		std::cout << "Rok" << rok << " jest przestepny.";
	else
		if (rok % 100 == 0)
			std::cout << "Rok " << rok << " nie jest przestepny";
		else
			if (rok % 4 == 0)
				std::cout << "Rok " << rok << " jest przestepny";
			else
				std::cout << "Rok " << rok << " nie jest przetepny";
	std::cout << std::endl;


   


}

