#include <iostream>

using namespace std;

int sumar(int a, int b)
{
	int resultado;
	return a+b;
	return resultado;
}

void sumarConValor(int &a, int &b, int &resultado)
{
	a=10;
	b=12;
	resultado = a+b;
}

int main(int argc, char** argv) {
	
	int num1=5, num2=7, r=0;
	
	//sumar(num1,num2);
	
	 sumarConValor(num1, num2, r);
	 
	 cout<< num1<<endl;
	cout<< num2<<endl; 
	cout<< r<<endl;
	
	
	
	return 0;
}
