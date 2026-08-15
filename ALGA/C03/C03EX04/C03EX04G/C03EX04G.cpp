//C03EX04G

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a, b, c, d;
	int resultado;
	
	print("Digite o valor de A... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor de B... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	print("Digite o valor de C... : ");
	cin >> c;
	cin.ignore(80,'\n');
	
	print("Digite o valor de D... : ");
	cin >> d;
	cin.ignore(80,'\n');
	println();
	//Adições
	resultado = a + b;
	println("Variavel A + B = {}",resultado);
	
	resultado = a + c;
	println("Variavel A + C = {}",resultado);
	
	resultado = a + d;
	println("Variavel A + D = {}",resultado);
	
	resultado = b + c;
	println("Variavel B + C = {}",resultado);
	
	resultado = b + d;
	println("Variavel B + D = {}",resultado);

	resultado = d + c;
	println("Variavel D + C = {}",resultado);
	println();
	// Multiplicações
	resultado = a * b;
	println("Variavel A * B = {}",resultado);
	
	resultado = a * c;
	println("Variavel A * C = {}",resultado);
	
	resultado = a * d;
	println("Variavel A * D = {}",resultado);
	
	resultado = b * c;
	println("Variavel B * C = {}",resultado);
	
	resultado = b * d;
	println("Variavel B * D = {}",resultado);

	resultado = d * c;
	println("Variavel D * C = {}",resultado);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}
