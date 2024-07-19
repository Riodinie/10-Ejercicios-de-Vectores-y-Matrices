/*1. Dados dos vectores numúricos diseñar un código que identifique y muestre los números que tienen en común.*/

#include <iostream>

using namespace std;

int main()
{

	int vector1[] = {1, 2, 3, 4, 5};
	int vector2[] = {1, 5, 3, 8, 9};

	cout << "\nLos vectores 1 y 2 tienen en común los números: ";

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{

			if (vector1[i] == vector2[j])
			{
				cout << vector1[i] << " ";
			}
		}
	}

	return 0;
}
