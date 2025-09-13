//1.- Una frutería ofrece las manzanas con descuento según la siguiente tabla:
//Kg comprados % 	Descuento
//0 – 2 		    	 0%
//2,01 – 5 		        10%
//5,01 – 10 	    	15%
//10,01 en adelante 	20%
//Determinar cuánto pagara  $ una persona que compre manzanas es esa frutería.
#include <iostream>
using namespace std;
int main()
{
   int m,c,d,tc,tcd;
   
   
   	cout<<"cual es el precio de las manzanas?"<<endl;
   	cin>>c;
   	cout<<"cuantas manzanas compro?"<<endl;
   	cin>>m;
   	tc=(m*c);
   	if (m>=1 and m<=2)
   	{
   		cout<<"tu total a pagar es: $"<<tc<<endl;
   		cout<<"--no tienes descuento--"<<endl;
   		cout<<"tu total a pagar es: $"<<tc<<endl;
	   }
	   else{
	   	if (m>2 and m<=5)
	   	{
	   		d=(tc*0.1);
	   		tcd=(tc-d);
	   		cout<<endl;
	   		cout<<"tu total a pagar es: $"<<tc<<endl;
   		    cout<<"--tienes descuento de 10%--"<<endl;
   		    cout<<"tu total a pagar es: $"<<tcd<<endl;
		   }
		   else{
		   	if (m>5 and m<=10)
	   	    {
	   		    d=(tc*0.15);
	   		    tcd=(tc-d);
	   		    cout<<endl;
	   		    cout<<"tu total a pagar es: $"<<tc<<endl;
   		        cout<<"--tienes descuento de 15%--"<<endl;
   		        cout<<"tu total a pagar es: $"<<tcd<<endl;
		        }
		        else{
		        	if (m>10)
		        	{
		        	    d=(tc*0.2);
	   		            tcd=(tc-d);
	   		            cout<<endl;
	   		            cout<<"tu total a pagar es: $"<<tc<<endl;
   		                cout<<"--tienes descuento de 20%--"<<endl;
   		                cout<<"tu total a pagar es: $"<<tcd<<endl;
		                }
					}
				}
		   }
		   return 0;
 }
