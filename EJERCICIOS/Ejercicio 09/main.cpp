#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int numero = 0, numerosecreto=7;
	
	cout<<"Ingrese numero:";
	cin>>numero;
	
	
	cout<<endl;
	if (numero== numerosecreto){
		cout<<"Adivinastes el numero secreto:"<<numero;
	
	}
		else
		cout<<"No adivinastes el numero secreto";
	
	
	return 0;
}
