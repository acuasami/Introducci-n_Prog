//Realizar un programa que capture calificaciones de un curso y calcule su promedio, el programa deberá preguntar al usuario si 
//desea continuar  capturando calificaciones . Utilizar la estructura do while.
#include <iostream>
using namespace std;
int main(){
	int i;
	float c, sc, p;
	char r;
	i=0;
	sc=0;
	do{
		i=i+1;
		cout<<i<<".-ingresa tu calificacion: "<<endl;
		cin>>c;
		sc=sc+c;
		cout<<"deseas agregar otra calificacion? [S/N]"<<endl;
		cin>>r;
	}	while (r=='s' or r=='S');
	p=sc/i;
	system("cls");
	cout<<"tu promedio es: "<<p<<endl;
	return 0;
}
