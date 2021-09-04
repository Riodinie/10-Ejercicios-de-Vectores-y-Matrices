/*Diseñar un código para determinar si una matriz es simétrica */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num[100][100],fil,col;
	char b='F';
	
	cout<<"Digite la cantidad de filas: "; cin>>fil;
	cout<<"Digite la cantidad de columnas: "; cin>>col;
	

	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			cout<<"Digita un numero ["<<i<<"]["<<j<<"]: ";
			cin>>num[i][j];
		}
	}
	
	if(fil==col){
		for(int i=0;i<fil;i++){
			for(int j=0;j<col;j++){
				if(num[i][j] == num[j][i]){
					b='V';
				}
			}
		}
	}

	if(b=='V'){
		cout<<"\nEs una matriz simetrica";
	}
	else{
		cout<<"\nNo es una matriz simetrica";
	}
	
	return 0;
}

