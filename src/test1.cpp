#include <iostream>
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		std::cout << i << std::endl;
		switch ( i )
		{
		case 1:
			std::cout << "one" << std::endl;
			break;
		case 2:
			std::cout << "two" << std::endl;
			break;
		default:
			std::cout << "not one or two" << std::endl;
			break;
		}
	}
	return 0;
}
