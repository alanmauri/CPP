#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(int argc, char** argv) {
	
	int numeroSecreto = 0, miNumero = 0;
	
	srand(time(NULL));
	
	numeroSecreto = rand() % 10 + 1;
	
	do
	{
		
		cout<< "Adivina el nuemro secreto (1 a 10): ";
		cin>> miNumero ;
		cout<<endl;
		
		if(numeroSecreto < miNumero)
		{
		
			cout<<"El numero puede ser menor. "<<endl;
			cout<<endl;
	
	    }
		else
		{
			if(numeroSecreto > miNumero)
			{
				cout<<"El numero secreto puede ser mayor. "<<endl;
				cout<<endl;
			}
			
		}
		
		}while(numeroSecreto != miNumero);
		
		cout<<endl;
		cout<<"Abivinastes el numero secreto:";
	
	return 0;
}
