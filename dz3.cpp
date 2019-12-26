#include <iostream>

void find_pair(int & size, int * a, int g, int c)
{
	if (g > c) 
	{
		int temp = 0;
		temp = c;
		c = g;
		g = temp;

	}
	int place = 0;
	int one = 0;
	int left = 0;
	int right = size;
	int count = 0;
	for (int i = size / 2; count < size ; i = (right / 2) + (left/2))
	{
		if (c == a[i]) { one++; place = i; }
		if (c > a[i]) { left = i + 1; count++; }
		if (c < a[i]) { right = i; count++; }
		if (one == 1) { break; }
	}
	int two = 0;
	left = 0;
	right = c;
	count = 0;
	if (one == 1)
	{
		for (int j = place / 2; count < place; j = (right/2) + (left/2))
		{
			if (g == a[j]) { two++; }
			if (g > a[j]) { left = j + 1; count++; }
			if (g < a[j]) { right = j; count++; }
			if (two == 1) { break; }
		}
	}
	if ((one == 1) && (two == 1)) { std::cout << "yes"; }
	if ((one == 0) || (two == 0)) { std::cout << "no"; }
}




int main(int argc, const char* argv[])
{
	int size;
	int g;
	int c;
	std::cin >> size >> g >> c;
	int * a = new int[size];
	for (int x = 1; x < size + 1; x++)
	{
		std::cin >> a[x];
	}
	find_pair(size, a, g, c);
	return 0;
}









