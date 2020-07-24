#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int opcion=0;
	
	while(true){
		
		system ("cls");
		cout<< "****" << endl;
		cout<< "Menu" << endl;
		cout<< "****" << endl;
		
		cout<< endl;
		cout<< "1 - Bebidas calientes:" << endl;
		cout<< "2 - Bebidas heladas: " << endl;
		cout<< "3 - Reposteria: " << endl;
		cout<< "0 - Salir: " << endl;
		
		cout<<endl;
		cout<< "Ingrese una opcion del menu: "<<endl;
		cin>>opcion;
		
		if (opcion==1){
			system ("cls");
			cout<< "******************" << endl;
			cout<< "Bebidas calientes : "<<endl;
			cout<< "******************" << endl;
			cout<<endl;
			system("pause");
		}
		
		if (opcion==2){
			system ("cls");
			cout<< "****************" << endl;
			cout<< "Bebidas heladas: "<<endl;
			cout<< "****************" << endl;
			cout<<endl;
			system("pause");
		}
		
		if (opcion==3){
			system ("cls");
			cout<< "***********" << endl;
			cout<< "Reposteria: "<<endl;
			cout<< "***********" << endl;
			cout<<endl;
			system("pause");
		}
		
		if (opcion <0 || opcion >3){
			system ("cls");
			cout<< "Ingrese una opcion valida entres 0 y 3: "<<endl;
			cout<<endl;
			system("pause");
		}
		
		if (opcion==0){
			break;
		}
	}
	

	cout<<endl;
	cout<<"Salistes del sistema: ";
	return 0;

}
