/*2. Diseñar un código para trasponer una matriz cuadrada */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int num[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	cout << "\nMatriz\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << num[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\nMatriz Transpuesta\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << num[j][i] << " ";
		}
		cout << "\n";
	}

	return 0;
}
