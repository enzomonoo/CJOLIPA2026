//C04EX03A

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a, b, resultado;
	
	print("Digite o valor da variavel A............... : ");
	cin >> a;
	cin.ignore(80, '\n');
	
	print("Digite o valor da variavel B............... : ");
	cin >> b;
	cin.ignore(80, '\n');
	
	if (a > b) resultado = a - b;
	else resultado = b - a;
	
	println();
	print("Resultado do numero maior menos o menor... : {}", resultado);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
