//Llenar un vector de 20 elementos, imprimir la posición y el valor del elemento mayor y el menor 
//almacenado en el vector. Suponga que todos los elementos del vector son diferentes.
#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	int v[19], i,ma,me;
	ma=0;
    me=1000;
for (int i=0;i<=19;i++){
	 cout<<i<<".ingresa tu numero: "<<endl;
	 cin>>v[i];
}
for (int i=0;i<=19;i++){
	if (v[i]>ma){
		ma=v[i];
	}
}
for (int i=0;i<=19;i++){
	if (v[i]<me){
		me=v[i];
	}
}
for (int i=0;i<=19;i++){
	if (ma==v[i]){
		cout<<endl;
		cout<<endl;
		cout<<"el numero mayor es: "<<v[i]<<" en la posicion_"<<i<<endl;
	}
}
for (int i=0;i<=19;i++){
	if (me==v[i]){
		cout<<"el numero menor es: "<<v[i]<<" en la posicion_"<<i<<endl;
	}
}
	return 0;
}
