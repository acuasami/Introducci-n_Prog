//En una empresa se  fabrican los siguientes productos con sus respectivos costos de acuerdo a la siguiente tabla:
//Producto	Costo
//Bicicletas    	850.00
//Triciclos	        450.00
//Patinetas	        350.00
//Patines	        325.00
//Realizar un programa que  despliegue un menú con cada uno de los productos anteriores y su costo, de tal 
//manera que el cliente elija el producto a comprar y la cantidad de éste. El usuario puede elegir varios productos, el programa  
//termina cuando el usuario ya no desea comprar otro producto. Al finalizar deberá imprimir los tipos de productos elegidos su cantidad y 
//el costo total de la compra.
#include <iostream>
using namespace std;
int main(){
	int n,b,t,p,pa,can,tb,tt,tp,tpa,tdc;
	char r;
	b=0;
	t=0;
	p=0;
	pa=0;
	do{
		cout<<"PRODUCTOS"<<endl;
	    cout<<endl;
    	cout<<"(1)Bicicletas    	850.00"<<endl;
    	cout<<"(2)Triciclos	        450.00"<<endl;
    	cout<<"(3)Patinetas	        350.00"<<endl;
    	cout<<"(4)Patines	        325.00"<<endl;
		cout<<endl;
		cout<<"selecciona el numero de tu cumpra:"<<endl;
		cin>>n;
		if (n==1){
			cout<<"cuntas bicicletas desea comprar?"<<endl;
			cin>>can;
			b=b+can;
			system ("cls");
		}
		else{
			if (n==2){
				cout<<"cuantos triciclos desea comprar?"<<endl;
				cin>>can;
				t=t+can;
				system ("cls");
			}
			else{
				if (n==3){
					cout<<"cuantas patinetas desea comprar?"<<endl;
					cin>>can;
					p=p+can;
					system ("cls");
				}
				else {
					if(n==4){
						cout<<"cuantos patines desea comprar?"<<endl;
						cin>>can;
						pa=pa+can;
						system ("cls");
					}
					else{
						cout<<"obcion fuera de rango"<<endl;
						system ("cls");
					}
				}
			}
		}
		cout<<"deseas hacer otra compra? [S/N]"<<endl;;
		cin>>r;
	}while (r=='s' or r=='S');
	system ("cls");
	tb=b*850;
	tt=t*450;
	tp=p*350;
	tpa=pa*325;
	cout<<"compraste "<<b<<" bisicletas con un total de: $"<<tb<<endl;
	cout<<"compraste "<<t<<" triciclos con un total de: $"<<tt<<endl;
	cout<<"compraste "<<p<<" patinetas con un total de: $"<<tp<<endl;
	cout<<"compraste "<<pa<<" patines con untotal de: $"<<tpa<<endl;
	cout<<"________________________________________________________________"<<endl;
	tdc=tb+tt+tp+tpa;
	cout<<"tu total de compra es: $"<<tdc;
	return 0;
}
