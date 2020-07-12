#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a=0, b=0, resultado=0;
	
	cout << "Ingrese el Valor de a: ";
	cin >> a;
	
	cout << endl;
	
		cout << "Ingrese el Valor de b: ";
	cin >> b;
	
	resultado=a+b;
	
	cout << "El resultado de la suma es: " << resultado<< endl;
	
	return 0;
}
