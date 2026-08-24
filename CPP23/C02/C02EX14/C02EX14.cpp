//C02EX14

#include <iostream>

using namespace std;

int main(void){
	
	int16_t x, y;
	
	/**
	 * Operadores PRÉ fixados e PÓS fixados
	 * ++ -> Acressimo Sucessivo de 1 em 1
	 * -- -> Decréssimo Sucessivo de 1 em 1
	 * 
	 * Pré : ++X	Pós : X++
	*/
	
	x = 10;
	y = ++x; // + 1 em x e ENTÃO y recebe x
	cout << "\nX = " << x << " | Y = " << y << endl;
	
	x = 10;
	y = x++; // y recebe x ENTÃO + 1 em x
	cout << "\nX = " << x << " | Y = " << y << endl;
	
	cout << endl;
	cout << "Aperte [Enter] para encerrar...";
	cin.get();
	
	return 0; // Retorno de Valor (0) com sucesso
}
