#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int sumar(int a, int b){
	
	return a+b;
}

int restar(int a, int b){
	
	return a-b;
}

int multi(int a, int b){
	
	return a*b;
}

int dividir(int a, int b){
	
	if(b==0){
		
		throw "No se puede dividir entre 0";
	}
	
	return a/b;
}

int calculadora(int a, int b, char operador){
	
	switch (operador){
		case '+':
		return sumar(a,b);
		break;
		
	}
	
	switch (operador){
		case '-':
		return restar(a,b);
		break;
		
	}
	
	switch (operador){
		case '*':
		return multi(a,b);
		break;
		
	}
	
	switch (operador){
		case '/':
		return dividir(a,b);
		break;
		
		default:
			break;
		
	}
		throw "El operador no existe.";
}

int main(int argc, char** argv) {
	
	int n1= 0, n2=0, r=0;
	char operador;
	
	cout<< "Ingrese el valor de a: ";
	cin>> n1;
	
	cout<<endl;
	
	cout<< "Ingrese el valor de b: ";
	cin>> n2;
	
	cout<<endl;
	
	cout<< "Ingrese el operador(+, -, *, /): ";
	cin>> operador;
		
	cout<<endl;
	
	try{
		
		r=calculadora (n1, n2, operador);
		
	cout<<"El resultado de   " << n1 << operador << n2 <<"   es: ";
	cout<< r;
	
	}
	catch(const char* error){
		
		cout<< error; 
	}
	
	
	return 0;
}
