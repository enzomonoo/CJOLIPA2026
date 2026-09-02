//C05EX05

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	println();
	print("Apenter [Enter] para encerrar...");
	cin.get();
}

uint16_t somax(int16_t a, int16_t b, string &mensagem){
	if (a % 2 == 0 and b % 2 == 0)
		mensagem = "Valores fornecidos sao pares";
	else
		if (a % 2 != 0 and b % 2 != 0)
			mensagem = "Valores fornecidos impares";
		else
			mensagem = "Valores fornecidos mistos";
	return a + b;
		
}

int main(void){
	uint16_t v1, v2;
	string m;
	
	print("Entre o primeiro valor... : ");
	cin >> v1;
	cin.ignore(80,'\n');
	
	print("Entre o segundo valor.... : ");
	cin >> v2;
	cin.ignore(80,'\n');
	
	println();
	println("Resultado da soma...... : {}",somax(v1, v2, m));
	println();
	println("Status dos valores..... : {}", m);
	println();
	pausa();
	return 0;
}
