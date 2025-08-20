#include <iostream>
using namespace std;

int main(){
	int numeros[10];
	
	// Insercao de Valores
	for(int i=0; i < 5; i++){
		cout << "Digite o valor " << i+1 <<": ";
		cin >> numeros[i];
	}
}