//C03EX04

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int32_t a, b, r;
	
	print("Digite o valor para A... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor para B... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	println();
	
	if(r = a + b; r >= 10)
		print("Resultado = {}", r + 5);
	else
		print("Resultado = {}", r - 7);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
