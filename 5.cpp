/* 5. Dadas dos matrices: A[m][n] y B[n][m], diseñar un código para comprobar si la matriz B es la traspuesta de A. */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int B[3][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};

	cout << "\nMatriz A\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\nTranspuesta de A\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << A[j][i] << " ";
		}
		cout << "\n";
	}

	cout << "\nMatriz B\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << "\n";
	}
	int sonIguales = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int valorA = A[j][i];
			int valorB = B[i][j];
			if (valorA != valorB)
			{

				sonIguales = 0;
			}
		}
	}
	cout << "" << endl;
	if (sonIguales)
	{
		cout << "La transpuesta de A es igual B";
	}
	else
	{
		cout << "La transpuesta de A no es igual B.";
	}
}
