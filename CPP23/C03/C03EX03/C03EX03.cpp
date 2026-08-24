//C03EX03

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int32_t a, b, x;
	
	print("Digite o primeiro valor... : ");
	cin >> a;
	cin.ignore(80, '\n');
	
	print("Digite o segundo valor.... : ");
	cin >> b;
	cin.ignore(80, '\n');
	
	println();
	
	if (a > b){
		x = a;
		a = b;
		b = x;
	}
	
	print("Os valores ordenados são : {} e {}", a, b);
	
	println();
	print("Aprente [Enter] para encerrar...");
	cin.get();
	
	return 0;
}
