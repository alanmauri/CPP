#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int  sumar(int a, int b){
	
	return a + b;
}

int  restar(int a, int b){
	
	return a - b;
}

int main(int argc, char** argv) {
	
	int numero1, numero2;
	
	cout<<"Ingrese el valor a: ";
	cin>> numero1;
	cout<<endl;
	
	cout<<"Ingrese el valor b: ";
	cin>> numero2;
	cout<<endl;
	
	cout<<endl;
	
	cout<<"El resultado de la suma es: "  <<sumar(numero1,numero2);
	cout<<endl;
	cout<<endl;
	
	cout<<"El resultado de la resta es: " <<restar(numero1,numero2);
	cout<<endl;
	
	
	return 0;
}
