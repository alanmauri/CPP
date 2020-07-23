#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int pares = 0, impares = 0, total = 0;
	

	
	for( int i = 1; i <= 10; i++)
	{
		if( i %  2 == 0)
		{
			pares = pares + i;
		}
		
		if( i % 2 == 1)
		{
			impares = impares + i;
		}
		
		cout << i <<"  ";
	}
	
	total = pares + impares;
	cout << endl;
	cout << endl;
	
	cout << "La suma de todos los numeros pares es: " << pares; 
	cout << endl;
	cout << endl;
	
	cout << "La suma de todos los numeros impares es: " << impares;
	cout << endl; 
	cout << endl;
	
	
	cout << "La suma de los nuemeros pares e impares es:" << total;
	 
	return 0;
}
