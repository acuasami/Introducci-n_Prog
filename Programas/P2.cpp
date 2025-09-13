//Realizar un programa que capture  n numeros y calcule su promedio el programa debera preguntar al usuario si desea continuar  capturando o no 
#include <iostream>
using namespace std;
int main(){
	int i, c;
	float n, p, s;
	i=0;
	s=0;
	cout<<"cuantos numeros desea capturar para sacar su promedio?"<<endl;
	cin>>c;
	while (i<c){
		i=i+1;
		cout<<i<<".-Numero:"<<endl;
		cin>>n;
		s=s+n;
		system("cls");
	}
	p=(s/c);
	cout<<"el promedio de los numeros es: "<<p<<endl;
	return 0;
}
