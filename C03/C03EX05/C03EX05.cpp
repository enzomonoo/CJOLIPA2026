//C03EX05

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int32_t numero;
	
	print("Entre um valor... : ");
	cin >> numero;
	cin.ignore(80,'\n');
	println();
	
	if (numero >= 20 and numero <= 90)
		print("O valor esta entre 20 e 90");
	else
		print("O valor NAO esta entre 20 e 90");
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
