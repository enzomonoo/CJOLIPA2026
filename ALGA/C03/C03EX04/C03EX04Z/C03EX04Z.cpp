//C03EX04Z

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

int main(void){
	int a, b;
	float resultado;
	
	print("Digite o valor de A.............. : ");
	cin >> a;
	cin.ignore(80, '\n');
	
	print("Digite o valor de B.............. : ");
	cin >> b;
	cin.ignore(80, '\n');
	
	resultado = static_cast<float>(a) / static_cast<float>(b);
	resultado = pow(resultado, 2);
	
	println();
	print("Quadrado da divisao de {} e {}.... : {:.2f}", a, b, resultado);
	println();
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();	
	return 0;
}
