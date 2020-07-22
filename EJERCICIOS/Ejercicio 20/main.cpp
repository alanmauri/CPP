#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	
	int opcion = 0;
	
	cout<<"Ingrese una opcion:";
	cin>> opcion;
	
	cout<<endl;
	
	switch (opcion)
	{	
	case 1:
		cout<<"Escogistes la opcion 1:";
		break;
		
	case 2:
		cout<<"Escogistes la opcion 2:";
		break;
		
	case 3:
		cout<<"Escogistes la opcion 3:";
		break;
		
	default:
		cout<<"Ingrese un valor entres 1 y 3:";
		break;
			
			
		
		}
		
			
		
	
	
	return 0;
}
