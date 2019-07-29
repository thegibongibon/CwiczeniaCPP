#include <iostream>
using namespace std;
int main()
{

	// Która liczba jest największa

	float a, b, c;
	cout << "Podaj liczbe a \n";
	cin >> a;
	cout << "Podaj liczbe b \n";
	cin >> b;
	cout << "Podaj liczbe c \n";
	cin >> c;
	cout << endl;
	if ((a == b) && (b == c) && (a == c)) 
	{
		cout << "Najwieksza liczba to " << a; 	
	}
	else
	{
		if ((a > b) && (a > c)) 
		{
			cout << "Najwieksza liczba to " << a;
		}
		else
		{
			if ((b > a) && (b > c)) 
			{
				cout << "Największa liczba to " << b;
			}

			else
			{
				if ((c > a) && (c > b)) 
				{
					cout << "Najwieksza liczba to " << c;
				}
				else
				{



				}
			}
		}
	}

	if ((a == 6) && (b == 6) && (c == 6)) {
		cout << endl;
		cout << "\n\tliczba to " << a << b << c << " szatan programowania";
	}


}