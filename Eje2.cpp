#include<iostream>

using namespace std;

int main (){
	int n, i=0, limite;
	cout<<"Ingresa el valor a encontrar la tabla de multiplicacion: \n";
	cin>>n;
	cout<<"ingresa el maximo limite para la tabla de multiplicacion: ";
	cin>>limite;

	do{
	
	  cout<<n<<"*"<<i<< "="<<n*i<<endl;
	  i++;
	}while(i<=limite);
	return 0;
	
}
