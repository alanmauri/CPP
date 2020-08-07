#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

string nombreCompleto(sting nombre, string apellido){
	
	return nombre +" "+ apellido;
}

int main(int argc, char** argv) {
	return 0;
	
	string primerNombre=" ",primerApellido="";
	
	cout<<"Ingrese primer nombre: ";
	cin>>primerNombre;
	
	cout<<"Infrese primer apellido: ";
	cin>>primerApellido;
	
	
	cout<<"El nombre completo es: " << nombreCompleto(primerNombre, primerApellido);
	
}
