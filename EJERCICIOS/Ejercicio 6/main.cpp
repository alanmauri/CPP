#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a=0, b=0, suma=0, resta=0, multi=0, division=0;
	
	cout << "Ingrese el Valor de a : ";
	cin>> a; 
	
	cout << "Ingrese el Valor de b : ";
	cin>> b;
	
	suma = a + b;
	resta = a - b;
	multi = a * b;
	division = a / b;
	
	cout << "la respuesta de la suma es: " << suma << endl;
	cout << "la respuesta de la resta es: " << resta << endl;
	cout << "la respuesta de la multiplicacion es: " << multi << endl;
	cout << "la respuesta de la divicion es: " << division << endl;
	return 0;
}
