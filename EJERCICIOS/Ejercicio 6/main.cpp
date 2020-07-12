#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a=0, b=0, suma=0, resta=0,multi=0,division=0;
	
	cout << "Ingrese el Valor de a: ";
	cin >> a;
	
	cout << endl;
	
		cout << "Ingrese el Valor de b: ";
	cin >> b;
	
	suma=a+b;
	resta=a-b;
	multi=a*b;
	division=a/b;
	
	cout << "El resultado de la suma es: " << suma<< endl;
	cout << "El resultado de la resta es: " << resta<< endl;
	cout << "El resultado de la multi es: " << multi<< endl;
	cout << "El resultado de la division es: " << division<< endl;
	
	return 0;
}
