//Dada una matriz de N filas por M columnas de elementos enteros, escribir un algoritmo que halle el promedio de
//todos los elementos que son pares.
#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	int v[100][100],n,m,c,a,i,j;
	float p;
	c=0;
	a=0;
	cout<<"ingrese el numero de filas: "<<endl;
	cin>>n;
	cout<<"ingrese el numero de columnas: "<<endl;
	cin>>m;
	cout<<"_______________________________________________________________"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<"["<<i<<"]["<<j<<"]"<<". ingrese su numero: "<<endl;
			cin>>v[i][j];
				if(v[i][j]%2==0){
				c=c+1;
				a=a+v[i][j];
			}
		}
	}

	cout<<"_______________________________________________________________________________"<<endl;
	cout<<endl;
	p=a/c;
	cout<<"el promedio de los numeros pares es: "<<p;
	return 0;
}
