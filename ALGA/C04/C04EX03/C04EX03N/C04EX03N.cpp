//C04EX03N

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a, b, c, r;
	
	print("Digite o valor para A... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor para B... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	print("Digite o valor para C... : ");
	cin >> c;
	cin.ignore(80,'\n');
	println();
	
	r = a + b + c;
	
	if (r >= 100) print("Resultado............... : {}", r);
	println();
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
