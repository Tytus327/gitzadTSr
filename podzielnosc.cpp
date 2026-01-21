#include<iostream>


int main()
{
	int x, y;

	std::cin >> x >> y;
	if(x < 1 || y < 1)
	{
		std::cout << "Koniec dzialania programu. Podaj dodatnie liczby." << std::endl;
		return 1;
	}
	else
	{
		std::cout << x << " " << y << std::endl;
	}

	return 0;
}
