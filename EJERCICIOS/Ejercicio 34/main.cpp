#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

string nombreCompleto(string nombre, string apellido) {
	
	return nombre +" "+ apellido;
}

int main(int argc, char** argv) {
	
	string primerNombre=" ";
	string primerApellido="";
	
	cout<<"Ingrese su primernombre: ";
	cin>>primerNombre;
	
	
	cout<<"Ingrese su primer apellido: ";
	cin>>primerApellido;
	
	cuut<<endl;
	
	cout<< "El nombre completo es: " <<nombreCompleto(primerNombre, primerApellido);
	
	return 0;
}
