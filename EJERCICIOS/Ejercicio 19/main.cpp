#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	
	int a=2,b=10;
	
	while(a>b){
		cout<<"(while) a > b"<< endl;
		break;
	}
	
	cout<<endl;
	do {
		cout<< "(Do while) a > b"<< endl;
		break;
			
	}while(a > b);
	
	return 0;
}
