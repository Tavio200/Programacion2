#include <iostream>
using namespace std;

int main()
{

 	int i=1;
 	float num, total=0.0;
 	char choose='1';
	
    	cout<<"Este programa suma los numeros capturados "<<"\n";
	     do{
	    	cout<<"ingresa el numero: ";
		    cin>>num;
		
		  total=total+num;
		   cout<<"para continuar capturando mas datos 1, para terminar 0"<<endl;
		  cin>>choose;
	     }while(choose=='1');
	cout<<"La suma de los numero es:  \n"<<total<<endl;
	return 0;
	
	
	
}
