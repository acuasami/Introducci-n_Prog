//Realizar un programa que capture la cantidad de helados que vendió “la michoacana”  a un costo de $12, 
//el programa deberá preguntar al usuario si desea capturar la venta de otro cliente.
//El programa deberá imprimir:
//La cantidad total de helados vendidos.
//La cantidad total de clientes.
//Y el total del dinero que se ganó
#include <iostream>
using namespace std;
int main(){
	int cl, cdh, h, th;
	char r;
	cl=0;
	cdh=0;
	cout<<"________LA MICHOACANA________"<<endl;
	do{
		cl=cl+1;
		cout<<"¿cuantos helados compro el cliente?"<<endl;
		cin>>h;
		cdh=cdh+h;
		cout<<"¿desea capturar otra compra?[S/N]"<<endl;
		cin>>r;
	}while (r=='s' or r=='S');
	th=cdh*12;
	cout<<"la cantidad de helados vendidos fue: "<<cdh<<endl;
	cout<<"la cantidad de clientes fue: "<<cl<<endl;
	cout<<"el total de la jornada fue: $"<<th<<endl;
}
