#include<iostream>
#include<algorithm>
int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int x = 0, y = 0;
		std::cin >> x >> y;
		int value = abs(x - y);
		int rez = 0;
		if (value % 10 != 0) rez = value / 10 + 1;
		else rez = value / 10;
		std::cout << rez << '\n';
	}
	return 0;
}