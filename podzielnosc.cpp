#include<iostream>

int NWD(int a, int b)
{
	while(b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main()
{
	int x, y;

	std::cin >> x >> y;

	std::cout << x << " " << y << ", NWD = " << NWD(x, y) << std::endl;

	return 0;
}
