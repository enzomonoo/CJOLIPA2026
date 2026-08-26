//C04EX03E

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

int main(void){
	int a, b, c, delta;
	
	print("Digite o valor para A... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor para B... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	print("Digite o valor para C... : ");
	cin >> c;
	cin.ignore(80,'\n');
	println();
	
	delta = pow(b, 2) - (4 * a * c);
	print("Na equacao {} = {}^2 - (4 * {} * {})",delta, b, a, c);
	println();

	if (delta > 0) print("Existem 2 solucoes");
	else if (delta < 0) print("Nao existem solucoes");
	else print("Existe apenas uma solucao");
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
