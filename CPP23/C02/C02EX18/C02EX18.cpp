//C02EX18

#include <iostream>
#include <print>

using namespace std;

int main(void){
	double valor = 3.1415;
	
	println("Valor com 2 casas decimais..... : {:.2f}",valor);
	println("Valor com notacao cientifica... : {:e}",valor);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
