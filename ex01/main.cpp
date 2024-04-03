#include "iter.hpp"
#include <iostream>
#include <cctype>
#include <unistd.h>

void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

int main()
{
	char a[] = {'A', 'B', 'C'};
	std::cout << "Original :\n";
	for (int i = 0; i != 3;i++)
	{
		std::cout << "\n\ta[0]: " << a[i] << std::endl;
	}

	::iter(a, 3, ft_tolower);
	std::cout << "Changed :\n";	
	for (int i = 0; i != 3;i++)
	{
		std::cout << "\n\ta[0]: " << a[i] << std::endl;
	}


	::iter(a, 3, ft_toupper);

	std::cout << "Back to Original :\n";	
	for (int i = 0; i != 3;i++)
	{
		std::cout << "\n\ta[0]: " << a[i] << std::endl;
	}
}