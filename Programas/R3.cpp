//3.- Una institución educativa estableció un programa para estimular a los alumnos con buen rendimiento académico y que consiste en lo siguiente:
//• Si el promedio es de 9.5 o más y el alumno es de preparatoria, entonces este podrá cursar 55 unidades y se le hará un 25% de descuento.
//• Si el promedio es mayor o igual a 9 pero menor que 9.5 y el alumno es de preparatoria, entonces este podrá cursar 50 unidades y se le hará un 10% de descuento.
//• Si el promedio es mayor que 7 y menor que 9 y el alumno es de preparatoria, este podrá cursar 50 unidades y no tendrá ningún descuento.
//• Si el promedio es de 7 o menor, el numero de materias reprobadas es de 0 a 3 y el alumno es de
//preparatoria, entonces podrá cursar 45 unidades y no tendrá descuento.
//• Si el promedio es de 7 o menor, el numero de materias reprobadas es de 4 o mas y el alumno es de preparatoria, entonces podrá cursar 40 unidades y no tendrá ningún descuento.
//• Si el promedio es mayor o igual a 9.5 y el alumno es de profesional, entonces podrá cursar 55 unidades y se le hará un 20% de descuento.
//• Si el promedio es menor de 9.5 y el alumno es de profesional, entonces podrá cursar 55 unidades y no tendrá descuento.
//• Obtener el total que tendrá que pagar un alumno si la colegiatura para alumnos de profesional es de $3000 por cada cinco unidades y para alumnos de preparatoria es de Bs. 2000 por cada cinco unidades.
#include <iostream>
using namespace std;
int main()
{
	int ct, r,mr,cpr,cp;
	float p,tpu;
	cp=2000;
	cpr=3000;
	cout<<"nveles escolares:"<<endl;
	cout<<endl;
	cout<<"1.-preparatotia"<<endl;
	cout<<"2.-profecional"<<endl;
	cout<<endl;
	cout<<"ingresa el numero de tu nivel escolar:"<<endl;
	cin>>r;
	
	switch (r){
		case 1: cout<<"cual es tu promedio? "<<endl;
		cin>>p;
		cout<<endl;
		if (p>=9.5){
			tpu=((55/5)*cp);
			ct=(tpu-(tpu*0.25));
			cout<<"---55 unidades a cursar"<<endl;
			cout<<"---total normal de la colegiatura $"<<tpu<<endl;
			cout<<"---25% de descuento en la colegiatura"<<endl;
			cout<<"---tu total de colegiatura es de: $"<<ct<<endl;
		}
		else{
			if(p>=9 and p<9.5){
					tpu=((50/5)*cp);
		     	ct=(tpu-(tpu*0.10));
		     	cout<<"---50 unidades a cursar"<<endl;
		     	cout<<"---total normal de la colegiatura $"<<tpu<<endl;
		     	cout<<"---10% de descuento en la colegiatura"<<endl;
		     	cout<<"---tu total de colegiatura es de: $"<<ct<<endl;
            	}
            	else{
            		if(p>=7 and p<9){
            				tpu=((50/5)*cp);
		                	cout<<"---50 unidades a cursar"<<endl;
		                	cout<<"---total normal de la colegiatura $"<<tpu<<endl;
		                	cout<<"---sin descuento en la colegiatura"<<endl;
							}
							else{
								if (p<7){
									cout<<"cuantas materias tienes reprobadas?"<<endl;
									cin>>mr;
									cout<<endl;
									if (mr<3){
								     	tpu=((45/5)*cp);
		                               	cout<<"---45 unidades a cursar"<<endl;
		                             	cout<<"---total normal de la colegiatura $"<<tpu<<endl;
		                             	cout<<"---sin descuento en la colegiatura"<<endl;
									}
									else {
										if (mr>4){
								 			tpu=((40/5)*cp);
		                                 	cout<<"---40 unidades a cursar"<<endl;
		                                 	cout<<"---total normal de la colegiatura $"<<tpu<<endl;
		                                 	cout<<"---sin descuento en la colegiatura"<<endl;
										}
									}
								}
							}
					}
				}
		case 2: cout<<"cual es tu promedio? "<<endl;
	 	cin>>p;
	 	cout<<endl;
		    if (p>=9.5){
			tpu=((55/5)*cpr);
			ct=(tpu-(tpu*0.20));
			cout<<"---55 unidades a cursar"<<endl;
			cout<<"---total normal de la colegiatura $"<<tpu<<endl;
			cout<<"---20% de descuento en la colegiatura"<<endl;
			cout<<"---tu total de colegiatura es de: $"<<ct<<endl;
		}
		else {
			if (p<9.5){
					tpu=((55/5)*cpr);
	     		cout<<"---55 unidades a cursar"<<endl;
	     		cout<<"---total normal de la colegiatura $"<<tpu<<endl;
		    	cout<<"---sin de descuento en la colegiatura"<<endl;
			}
		}
	}
	
}
