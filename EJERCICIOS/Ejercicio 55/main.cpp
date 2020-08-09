#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(int argc, char** argv) {
	
	int n1 = 0, n2=0;

	char intentos;
	
        
	do
	{
		system("cls");
		cout<<"==============="<<endl;
		cout<<"Juego de dados:"<<endl;
		cout<<"==============="<<endl;
		cout<<endl;
		
		
		cout<<"Presione la letra (S) si desea lanzar los dados. (n) para salir: ";
		cin>>intentos;
		cout<<endl;
		
		
		srand(time(NULL));
	
    	n1 = rand() % 6 + 1;
	
     	n2 = rand() % 6 + 1;
     	
	
		if(intentos == 's' || intentos=='S')
		{
		cout<< "El primer dado cayo en el numero: " <<n1 <<endl ;
		
		cout<<endl;
		
		cout<< "El segundo dado cayo en el numero: " <<n2 <<endl ;
		
		system("pause");
	
	
		}
	
		else
	
		{
			system("cls");	
		    cout<<endl;
	    	cout<<"Salistes del juego de tirar los dados. ";
	    	cout<<endl;
		}
		
		
		
	
		
		
		
		
	}while(intentos == 's' || intentos=='S' );
	
		
	
	return 0;
}
