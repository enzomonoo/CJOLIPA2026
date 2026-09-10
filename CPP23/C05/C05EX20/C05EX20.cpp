//C05EX20

#include <iostream>
#include <print>

using namespace std;

int16_t VALOR = 3;

namespace escopo1{
	int16_t VALOR = 2;
	
	namespace escopo2{
		int16_t VALOR = 1;
	}
}

void pausa(void){
	println();
	print("Apenter [Enter] para encerrar...");
	cin.get();
}

int main(void){
	int16_t VALOR = 4;
	
	println("{}", VALOR);
	println("{}", escopo1::VALOR);
	println("{}", escopo1::escopo2::VALOR);
	
	pausa();
	return 0;
}
