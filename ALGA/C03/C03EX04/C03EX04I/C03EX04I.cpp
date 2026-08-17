//C03EX04I

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

int main(void){
	int numero;
	
	print("Digite o numero desejado... : ");
	cin >> numero;
	cin.ignore(80, '\n');
	
	println();
	println("Numero {} ao quadrado... : {}", numero, pow(numero, 2));
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}
