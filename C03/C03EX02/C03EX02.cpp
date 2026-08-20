//C03EX02

#include <iostream>
#include <print>

using namespace std;

int main(void){
	
	int32_t a, b;
	
	print("Digite o valor para A... : ");
	cin >> a;
	cin.ignore(80, '\n');
	
	print("Digite o valor para B... : ");
	cin >> b;
	cin.ignore(80, '\n');
	
	if (int32_t r = a + b; r > 10)
		println("Resultado = {}", r);
		
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	
	return 0;
}
