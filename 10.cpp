//Diseñar un código para calcular el producto de dos matrices

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int A[3][3]={{3,2,1},{2,-4,-1},{0,2,3}};
	int B[3][3]={{2,4,1},{-6,1,3},{1,2,4}};
	int C[3][3];
	
	cout<<"\nMatriz A\n";
	for(int i=0;i<3;i++){
	  for(int j=0;j<3;j++){
		cout<<A[i][j]<<" ";
		  }
	cout<<"\n";
	}
	
	cout<<"\nMatriz B\n";
	for(int i=0;i<3;i++){
	  for(int j=0;j<3;j++){
		cout<<B[i][j]<<" ";
		  }
	cout<<"\n";
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			C[i][j]=0;
			for(int k=0;k<3;k++){
				C[i][j] = C[i][j] + A[i][k]*B[k][j];
			}
		}
	}
	
    cout<<"\nMatriz A x B\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<C[i][j]<<"  ";
		}
		cout<<"\n";
	}	
	
	return 0;
}

