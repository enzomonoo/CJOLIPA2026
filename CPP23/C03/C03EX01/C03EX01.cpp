//C03EX01

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int32_t	a, b, r;
	
	print("Entre o valor para A... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Entre o valor para A... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	println();
	
	r = a + b;
	
	if (r > 10)
		print("Resultado = {}", r);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
