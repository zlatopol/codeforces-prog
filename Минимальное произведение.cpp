#include<iostream>
#include<algorithm>

void print(const long long int& a, const long long int& b)
{
	std::cout << a * b << '\n';
}
int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; ++i)
	{
		long int x = 0, y = 0, a = 0, b = 0, n = 0;
		std::cin >> a >> b >> x >> y >> n;
		if (a > b)
		{
			std::swap(a, b); std::swap(x, y);
		}
		if ((a - n) >= x)  print(a - n, b);
		else
		{
			if (b - n >= y)
			{
				if (b - n < x) print(b - n, a);
				else print(x, b - (n - (a - x)));
			}
			else
			{
				if (y <= x) 
				{
					n = n - (b - y);
					if (a - n >= x) print(y, a - n);
					else print(x, y);
				}
				else
				{
					n = n - (a - x);
					if (b - n >= y) print(x, b - n);
					else print(x, y);
				}
			}
		}
	}
	return 0;
}