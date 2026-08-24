//C03EX04V

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

int main(void){
	int a, b, resultado;
	
	print("Digite o valor da base........ : ");
	cin >> a;
	cin.ignore(80, '\n');
	
	print("Digite o valor do expoente.... : ");
	cin >> b;
	cin.ignore(80, '\n');
	
	resultado = pow(a,b);
	
	println();
	println("Resultado..................... : {}", resultado);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();	
	return 0;
}
