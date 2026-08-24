//C03EX04Y

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int valor, valorSucessor, valorAntecessor;
	
	print("Digite o valor desejado... : ");
	cin >> valor;
	cin.ignore(80, '\n');
	
	valorAntecessor = valor - 1;
	valorSucessor = valor + 1;
	
	println();
	println("Valor antecessor de {}....... : {}", valor, valorAntecessor);
	println("Valor sucessor de {}......... : {}", valor, valorSucessor);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();	
	return 0;
}
