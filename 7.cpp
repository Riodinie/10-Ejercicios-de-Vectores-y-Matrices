/* 7. Diseñar un código para determinar si dos matrices contienen los mismos elementos, aunque estos no se presenten en el mismo orden. */
#include <iostream>

using namespace std;

int main()
{
    int f = 3, c = 3, mayor = 0, mayor2 = 0;

    int matriz[3][3] = {{3, 6, 7}, {9, 8, 1}, {2, 5, 4}};
    int matriz2[3][3] = {{2, 8, 1}, {5, 6, 4}, {3, 9, 7}};

    cout << "Matriz A" << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "" << endl;
    cout << "Matriz B" << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "" << endl;
    // ordeno la matriz de mayor a menor
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (int x = 0; x < f; x++)
            {
                for (int y = 0; y < c; y++)
                {
                    if (matriz[i][j] > matriz[x][y])
                    {
                        mayor = matriz[i][j];
                        matriz[i][j] = matriz[x][y];
                        matriz[x][y] = mayor;
                    }
                }
            }
        }
    }

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (int x = 0; x < f; x++)
            {
                for (int y = 0; y < c; y++)
                {
                    if (matriz2[i][j] > matriz2[x][y])
                    {
                        mayor2 = matriz2[i][j];
                        matriz2[i][j] = matriz2[x][y];
                        matriz2[x][y] = mayor2;
                    }
                }
            }
        }
    }

    // comparo las matrices
    int sonIguales = 1;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            int valorDeMatriz1 = matriz[x][y];
            int valorDeMatriz2 = matriz2[x][y];
            if (valorDeMatriz1 != valorDeMatriz2)
            {

                sonIguales = 0;
            }
        }
    }

    if (sonIguales)
    {
        cout << "A y B contiene  los mismo elementos.";
    }
    else
    {
        cout << "A Y B no contienen los mismos elementos.";
    }
    return 0;
}
