#include <iostream>
#include<math.h>
#include<conio.h>

using namespace std;

void f3(int n1, int n2, int&, int&, int&);
void f4(int&, int&, int&);

int main(){
	int n1,n2, ne2, ne3, nse;
	ne2=0;
	ne3=0;
	nse=0;
	cout<<"1. ingresa el valor de tu primer numero el cual sera elebado al cuadrado"<<endl;
	cout<<"2. ingresa el segundo valor que sera elevado al cubo"<<endl;
	cout<<"3. una vez dado -ENTER- apareceran los siguientes valores: "<<endl;
	cout<<endl;
	cout<<"-numero 1 elevado al cuadrado"<<endl;
	cout<<"-numero 2 elebado al cubo"<<endl;
	cout<<"-el numero uno elebado al segundo numero"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"___________________________________________________________"<<endl;
	cout<<" Michaus Gutierrez Sabrina"<<endl;
	cout<<"     FUNCIONES"<<endl;
	cout<<"        4IM5"<<endl;
	cout<<" CECyT 14 Luis Enrrique Erro"<<endl;
	cout<<"    Programacion Estructurada"<<endl;
	cout<<"_____________________________________________________________"<<endl;
	cout<<endl;
	cout<<"ingresa elvalor de tu numero 1:"<<endl;
	cin>>n1;
	cout<<"ingresa elvalor de tu numero 2:"<<endl;
	cin>>n2;
	cout<<"___________________________________________________________"<<endl;
	f3(n1,n2,ne2,ne3,nse);
	f4(ne2, ne3, nse);
	
	return 0;
}


void f3(int n1, int n2, int& ne2, int& ne3, int& nse){

 ne2= pow(n1,2);
 ne3= pow(n2,3);
 nse= pow(n1,n2);

}

void f4(int& ne2, int& ne3, int& nse) {

void	f3 (int n1, int n2, int& ne2, int& ne3, int& nse);
	cout<<"el cuadrado del numero 1 es: "<<ne2<<endl;
	cout<<"el cubo del numero 2 es: "<<ne3<<endl;
	cout<<"el sesultado del numero 1 elevado a la potencia del numero 2 es: "<<nse<<endl;
	
}
