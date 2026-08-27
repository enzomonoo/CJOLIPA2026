//C02EX17

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int16_t valor;
	
	print("Digite o valor desejado........ : ");
	cin >> valor;
	cin.ignore(80,'\n');
	println();
	
	println("Valor decimal................. : {}", valor);
	println("Valor binario................. : {:b}", valor);
	println("Valor octal................... : {:o}", valor);
	println("Valor hexadecimal minusculo... : {:x}", valor);
	println("Valor hexadecimal maiusculo... : {:X}", valor);
	println();
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
