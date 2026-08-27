//C02EX22

#include <iostream>
#include <print>

using namespace std;

int main(void){
	println("Positivo com sinal..... : {:+}", 10);
	println("Com espaco em branco... : {: }", 10);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
