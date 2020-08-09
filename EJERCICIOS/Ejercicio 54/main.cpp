#include <iostream> 
#include <cmath> 
  
using namespace std; 
  
int main(int argc, char const *argv[]) { 

 double numero,raiz; 
  
  cout << "Ingresa un numero para obtener la raiz cuadrada: "; 
  cin >> numero; 
  
  raiz = sqrt(numero); 
  
  cout<<endl;
  cout << "La raiz cuadrada de " << numero << " es " << raiz << endl; 
  
  return 0; 
  
} 
