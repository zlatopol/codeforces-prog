#include<iostream>
#include<algorithm>
int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int x = 0, y = 0, a = 0, b = 0;
		std::cin >> a >> b >> x >> y;
		std::cout << std::max(
			std::max(x*b, (a-x-1)*b),
			std::max(y*a, a*(b - y - 1))
		)<< '\n';
	}
	return 0;
}