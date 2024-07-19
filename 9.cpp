/* 9. Defina una matriz de tamaño 3x4. Debe solicitar un número  y multiplicar cada elemento de la matriz por este número. Finalmente, el programa debe imprimir la matriz original y la matriz resultante después de la multiplicación. */

#include <iostream>
using namespace std;

int main()
{
    int num, A[3][4] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Ingresa número con el que deseas multiplicar: ";
    cin >> num;
    cout << "\nMatriz x " << num << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            A[i][j] = A[i][j] * num;
        }
    }
    cout << "\nResultado" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}
