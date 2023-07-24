/*синтаксическая
#include <iostream>

int main
{
	return 0;
}*/

/*семантическая
#include <iostream>

int deg(int a, int b)
{
	int p = 1;
	for (int i = 0; i <= b; i++)
	{
		p *= a;
	}
	return p;
}

int main()
{
	std::cout << deg(2, 4);
	return 0;
}*/
/*линковки
#include <iostream>
#include "Func.h"

int sum(int a, int b);

int sum(int a, int b)
{
	return b - a;
}

int main()
{
	std::cout << sum(5, 3);
	return 0;
}*/