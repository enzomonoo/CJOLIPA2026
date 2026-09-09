//C05EX17
 
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
	soma::resultado = 5 + 3;
	print("Soma........ : {}", soma::resultado);
	println();
	
	quociente::resultado = 5.0 / 3.0;
	print("Quociente... : {}", quociente::resultado);
	println();
	
	produto::resultado = 5 * 3;
	print("Produto..... : {}", produto::resultado);
	println();
	
	diferenca::resultado = 5 - 3;
	print("Diferenca... : {}", diferenca::resultado);
	println();
	
	pausa();
	return 0;
}
