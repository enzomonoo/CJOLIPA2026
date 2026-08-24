//C03EX04X

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

int main(void){
	float valorBase, valorRaiz, resultado;
	
	print("Digite o o valor da base... : ");
	cin >> valorBase;
	cin.ignore(80, '\n');
	
	print("Digite o o valor da raiz... : ");
	cin >> valorRaiz;
	cin.ignore(80, '\n');
	
	resultado = pow(valorBase, (1 / valorRaiz));
	
	println();
	println("Resultado...... : {:.2f}", resultado);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
