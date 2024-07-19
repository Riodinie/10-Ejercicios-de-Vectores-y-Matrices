/*3. Crear una matriz de 5x7, donde 5 representan la semana de un mes y 7 los días de la semana
La estructura registrara la temperatura diaria de una cabina de pago, estos oscilan entre los 7 y 38 grados.
Deberá llenar la matriz de forma aleatoria para el mes de mayo donde el primer día inicia en lunes y el
último (31) se ubica en el miércoles.*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int tempMax, tempMin, tempGlobalMax = 0, diaGlobal, dia, diaMax, diaMin, ultima = false;
float tempPromedio;

void temperaturaMax(int temp, int dia)
{
	if (temp > tempMax)
	{
		tempMax = temp;
		diaMax = dia;
	}
	if (tempGlobalMax < temp)
	{
		tempGlobalMax = temp;
		diaGlobal = dia;
	}
}

void temperaturaMin(int temp, int dia)
{
	if (temp < tempMin)
	{
		tempMin = temp;
		diaMin = dia;
	}
}

string diaSemana(int dia)
{
	switch (dia)
	{
	case 0:
		return "Lunes";
		break;
	case 1:
		return "Martes";
		break;
	case 2:
		return "Miércoles";
		break;
	case 3:
		return "Jueves";
		break;
	case 4:
		return "Viernes";
		break;
	case 5:
		return "Sábado";
		break;
	case 6:
		return "Domingo";
		break;
	default:
		return "Error";
		break;
	}
}

int main()
{

	srand((unsigned)time(0));
	int matriz[5][7];

	for (int i = 0; i < 5; i++)
	{
		tempMax = 0;
		tempMin = 38;
		diaMax = 0;
		diaMin = 0;
		tempPromedio = 0;
		for (int j = 0; j < 7; j++)
		{
			matriz[i][j] = rand() % 31 + 8;
			temperaturaMax(matriz[i][j], j);
			temperaturaMin(matriz[i][j], j);
			tempPromedio += matriz[i][j];
			if (i == 4 && j == 2)
			{
				ultima = true;
				break;
			}
		}
		cout << "Semana #" << i + 1 << endl;
		cout << "tempMax: " << tempMax << " - " << diaSemana(diaMax) << endl;
		cout << "tempMin: " << tempMin << " - " << diaSemana(diaMin) << endl;
		if (ultima)
		{
			cout << "tempPromedio: " << tempPromedio / 3 << endl
				 << endl;
		}
		else
		{
			cout << "tempPromedio: " << tempPromedio / 7 << endl
				 << endl;
		}
	}

	cout << "TempMaxGlobal: " << tempGlobalMax << " - " << diaSemana(diaGlobal);

	return 0;
}
