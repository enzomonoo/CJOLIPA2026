//C02EX12

#include <iostream>

using namespace std;

int main(void){
	
	bool x; //Valores bool podem ser true e false e também 1 e 0
	
	cout << boolalpha; // Demonstre de forma alfabética todo bool
	
	x = true;
	cout << "Valor X como Verdadeiro... : " << x << endl;
	
	x = false;
	cout << "Valor X como Falso... : " << x << endl;
	
	cout << noboolalpha; // Demonstre o bool normalmente
	
	x = true;
	cout << "Valor X como Verdadeiro... : " << x << endl;
	
	x = false;
	cout << "Valor X como Falso... : " << x << endl;
	
	cout << endl;
	cout << "Aperte [Enter] para encerrar...";
	cin.get();
	
	return 0; // Retorno de Valor (0) com sucesso
}
