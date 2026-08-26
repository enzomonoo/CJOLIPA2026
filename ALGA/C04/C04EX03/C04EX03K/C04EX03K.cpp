//C04EX03K

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a;
	
	print("Digite o valor desejado... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	println();
	if (a >= 1 and a <= 9) print("O valor esta na faixa permitida");
	else print("O valor esta fora da faixa permitida");
	println();
	
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
