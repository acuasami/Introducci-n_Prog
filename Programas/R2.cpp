//2.- Calcular la utilidad que un trabajador recibe en el reparto anual de utilidades si este se le asigna como
//un porcentaje de su salario mensual que depende de su antig�edad en la empresa de acuerdo con la siguiente tabla:
//Tiempo				                   Utilidad
//Menos de 1 a�o 		            	5% del salario
//1 a�o o m�s y menos de 2 a�os 		7% del salario
//2 a�os o m�s y menos de 5 a�os		10% del salario
//5 a�os o m�s y menos de 10 a�os		15% del salario
//10 a�os o m�s 				    	20% del salario 
#include <iostream>
using namespace std;
int main()
{
   int a,s,u;
    cout<<" De cuanto es tu salio mensual?"<<endl;
    cin>>s;
   	cout<<"cuantos a�os llevas trabajando en la Empreza?"<<endl;
   	cin>>a;
   	if (a<1)
   	{ 
   	    u=(s*1.05);
   		cout<<"tu salario es de : $"<<s<<endl;
   		cout<<"--tu compensacion es del 5%--"<<endl;
   		cout<<"tu salario total es de: $"<<u<<endl;
	   }
	   else{
	   	if (a>=1 and a<=2)
	   	{
	   		u=(s*1.07);
   		    cout<<"tu salario es de : $"<<s<<endl;
   		    cout<<"--tu compensacion es del 7%--"<<endl;
   		    cout<<"tu salario total es de: $"<<u<<endl;
		   }
		   else{
		   	if (a>2 and a<=5)
	   	    {
	   		    u=(s*1.10);
   		        cout<<"tu salario es de : $"<<s<<endl;
   		        cout<<"--tu compensacion es del 10%--"<<endl;
   		        cout<<"tu salario total es de: $"<<u<<endl;
		        }
		        else{
		        	if (a>5 and a<=10)
		        	{
		        	   u=(s*1.15);
   		            cout<<"tu salario es de : $"<<s<<endl;
   		            cout<<"--tu compensacion es del 15%--"<<endl;
   		            cout<<"tu salario total es de: $"<<u<<endl;
		                }
		                else {
		                	if (a>10)
		        	        {
		        	             u=(s*1.20);
   		                        cout<<"tu salario es de : $"<<s<<endl;
   		                        cout<<"--tu compensacion es del 20%--"<<endl;
   		                        cout<<"tu salario total es de: $"<<u<<endl;
		                        }
						}
					}
				}
		   }
		   return 0;
 }
