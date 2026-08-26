//C04EX03P

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int idade;
	bool acompanhado;
	
	print("Digite a idade......... : ");
	cin >> idade;
	cin.ignore(80, '\n');
	println();
	
	if (idade < 18){
		print("Esta acompanhado?...... : ");
		cin >> acompanhado;
		cin.ignore();
		if (acompanhado == 1) print("Autorizado!");
		else print("Nao Autorizado!");
	}
	else{
		print("Autorizado!");
	}
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
