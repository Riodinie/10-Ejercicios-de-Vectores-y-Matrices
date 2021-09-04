/* Diseñar un código para determinar si dos matrices son iguales; es decir, verificar si para todos los elementos se cumple que A[i][j] = B[i][j] 11. */

#include <stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
  int matriz1[3][3], matriz2[3][3];
 
  for (int x = 0; x < 3; x++) {
    for (int y = 0; y < 3; y++) {
      cout<<"Valor para primer matriz en "<<"["<<x<<"]"<<"["<<y<<"]:";
      cin>>matriz1[x][y];
    }
  }
  cout<<""<<endl;
  for (int x = 0; x < 3; x++) {
    for (int y = 0; y < 3; y++) {
      cout<<"Valor para segunda matriz en "<<"["<<x<<"]"<<"["<<y<<"]";
      cin>>matriz2[x][y];
    }
  }
  cout<<""<<endl;
  int sonIguales = 1;
  for (int x = 0; x < 3; x++) {
    for (int y = 0; y < 3; y++) {
      int valorDeMatriz1 = matriz1[x][y];
      int valorDeMatriz2 = matriz2[x][y];
      if (valorDeMatriz1 != valorDeMatriz2) {
     
        sonIguales = 0;
      }
    }
  }

  if (sonIguales) {
    cout<<"Son iguales";
  } else {
    cout<<"NO son iguales";
  }
}
