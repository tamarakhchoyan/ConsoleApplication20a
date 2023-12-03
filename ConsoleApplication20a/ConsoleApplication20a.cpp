#include <iostream>
int main()
{
	double x, y;
	std::cin >> x >> y;
	if(x>-1 && x<0 && y<0 && y>-1)
	{
		std::cout << "YES";
	}
	else { std::cout << "NO"; }
	return 0;
}