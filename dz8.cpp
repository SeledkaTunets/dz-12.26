

#include <iostream>

int main(int argc, const char* argv[])
{
    int size = 0;
    std::cin >> size;
    int k = 0;
    std::cin >> k;
    int* a = new int[size];
	if (k > size) {
		std::cout << "none";
	}
	else {
		for (int i = 1; i < size + 1; i++)
		{
			std::cin >> a[i];
		}
		int place = 0;
		int left = 0;
		int right = size;
		int count = 0;
		for (int i = size / 2; count < size; i = (right / 2) + (left / 2))
		{
			if (k == i) { place = i; std::cout << a[place]; break; }
			if (k > i) { left = i + 1; count++; }
			if (k < i) { right = i; count++; }
		}
	}
	return 0;
}

