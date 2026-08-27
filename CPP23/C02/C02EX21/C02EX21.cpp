//C02EX21

#include <iostream>
#include <print>

using namespace std;

int main(void){
	println("Zeros a esquerda.... : {:08}, {:08}", 10, -2);
	println("Espacos em branco... : {:8d}", 10);
	println("Sem espacos......... : {:d}", 10);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
