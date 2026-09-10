//C05EX18
 
#include <iostream>
#include <print>

using namespace std;

namespace soma{
	int16_t resultado;
}

namespace quociente{
	float resultado;
}

namespace produto{
	int64_t resultado;
}

namespace diferenca{
	double resultado;
}
 
void pausa(void){
	println();
	print("Apenter [Enter] para encerrar...");
	cin.get();
}
	
int main(void){
	using namespace produto;

	resultado = 5 + 3;
	print("Soma........ : {}", resultado);
	println();
	
	resultado = 5.0 / 3.0;
	print("Quociente... : {}", resultado);
	println();
	
	resultado = 5 * 3;
	print("Produto..... : {}", resultado);
	println();
	
	resultado = 5 - 3;
	print("Diferenca... : {}", resultado);
	println();
	
	pausa();
	return 0;
}
