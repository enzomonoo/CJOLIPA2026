//C02EX13

#include <iostream>
#include <typeinfo> // Biblioteca para indentificar o tipo das variáveis

using namespace std;

int main(void){
	auto numero = 42; // Ao utilizar auto é OBRIGATÓRIO definir um valor
	auto pi = 3.1416;
	
	cout << "Número : " << numero;
	cout << " - Tipo : " << typeid(numero).name() << endl; // i = int
	
	cout << "Pi : " << pi;
	cout << " - Tipo : " << typeid(pi).name() << endl; // d = decimal
	
	cout << endl;
	cout << "Aperte [Enter] para encerrar...";
	cin.get();
	
	return 0; // Retorno de Valor (0) com sucesso
}
