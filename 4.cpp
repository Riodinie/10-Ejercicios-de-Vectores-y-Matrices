/*4. Crear un arreglo o array multidimensional que contenga 3 columnas y las filas que Ud. quiera, las dos primeras columnas tendrán números y e
n la 3 columna será el resultado de sumar el número de la primera y segunda columna.*/

#include <iostream>

using namespace std;

int main()
{
    int suma;
    int vector1[3];

    cout << "Digite los 2 primeros valores de el arreglo:" << endl;
    for (int i = 0; i <= 1; i++)
    {
        cout << i << ": ";
        cin >> vector1[i];
    }
    cout << "" << endl;
    for (int i = 0; i <= 1; i++)
    {

        suma = suma + vector1[i];
        vector1[2] = suma;
    }

    for (int i = 0; i <= 2; i++)
    {
        cout << vector1[i];
        if (i == 0)
        {
            cout << " + ";
        }
        if (i == 1)
        {
            cout << " = ";
        }
    }
    cout << "\n"
         << endl;
    for (int e = 0; e <= 2; e++)
    {
        cout << "[" << e << "]-->" << vector1[e] << endl;
    }
}
