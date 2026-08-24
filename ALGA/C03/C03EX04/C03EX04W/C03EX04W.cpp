//C03EX04W

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

int main(void){
	float valorPes, valorMetros;
	
	print("Digite o o valor em pes... : ");
	cin >> valorPes;
	cin.ignore(80, '\n');
	
	valorMetros = valorPes * 30.48;
	
	println();
	println("{} pes em metros...... : {} metros", valorPes, valorMetros);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();	
	return 0;
}
