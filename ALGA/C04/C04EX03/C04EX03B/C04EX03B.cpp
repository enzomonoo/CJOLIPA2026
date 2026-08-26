//C04EX03B

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int numero, resultado;
	
	print("Digite o valor desejado... : ");
	cin >> numero;
	cin.ignore(80, '\n');
	
	if (numero < 0) resultado = numero * -1;
	else resultado = numero;
	
	print("Numero em positivo........ : {}", resultado);
	println();
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
