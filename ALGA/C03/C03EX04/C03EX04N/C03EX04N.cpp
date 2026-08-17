//C03EX04N

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

int main(void){
	int a, b, c, resultado;
	
	print("Digite o valor da variavel A.................. : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor da variavel B.................. : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	print("Digite o valor da variavel C.................. : ");
	cin >> c;
	cin.ignore(80,'\n');
	
	resultado = pow(a + b + c, 2);

	println();
	print("Resultado do quadrado da soma de {}, {} e {}... : {}", a, b, c, resultado);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}
