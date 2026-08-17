//C03EX04J

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

int main(void){
	int a, b, resultado;
	
	print("Digite o valor de A............... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor de B............... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	resultado = pow((a - b),2);
	
	println();
	println("Resultado do quadrado de {} - {}... : {}", a, b, resultado);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}
