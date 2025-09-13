//	Que lea 3 calificaciones y determine si alguna de ellas fue reprobatoria.
#include <iostream>
using namespace std;
int main()
{
	int r, i;
	 float c, c1, c2, c3;
     c1=0;
	 c2=0;
	 c3=0;
	 i=0;
     while (i<3){
	
	     cout<<"1)  calificasion 1"<<endl;
	     cout<<"2)  calificasion 2"<<endl;
	     cout<<"3)  calificasion 3"<<endl;
	     cout<<"escriba el numero de la calificacion que va a ingresar: "<<endl;
	     cin>>r;
	     i=i+1;
	     switch(r){
	 	     case 1:
	 		     cout<<"escribe tu calificacion (1): "<<endl;
	 		     cin>>c;
	 		     c1=c1+c;
	 		     system("cls");
	 		     break;
	 	      case 2:
	 		     cout<<"escribe tu calificacion (2):"<<endl;
	 		     cin>>c;
	 		     c2=c2+c;
	 		     system("cls");
	 	    	break;
	          case 3:
	 	    	cout<<"escribe tu calificacion (3):"<<endl;
	 	    	cin>>c;
	 		    c3=c3+c;
	 	    	system("cls");
	 	    	break;
            }
        }
	 if (c1>5.9 and c1<=10){
	 cout<<"calificacion 1_ APROBATORIA_"<<c1<<endl;}
	     else {
	 	     if (c1>0 and c1<=5.9){
		         cout<<"calificacion 1_ REPROVATORIA_"<<c1<<endl;}
	        }
     if (c2>5.9 and c2<=10){
	  cout<<"calificacion 2_ APROBATORIA_"<<c2<<endl;}
	        else{
	 	         if (c2>0 and c2<=5.9){
		             cout<<"calificacion 2_ REPROBATORIA_"<<c2<<endl;}
	           }
	 if (c3>5.9 and c3<=10){
	    cout<<"calificacion 3_ APROBATORIA_"<<c3<<endl;}
	         else {
	 	         if (c3>0 and c3<=5.9){
		             cout<<"calificacion 3_ REPROBATORIA_"<<c3<<endl;}
	           }
	 return 0;

}

 	




