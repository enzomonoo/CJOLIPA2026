//C03EX04K

#include <iostream>
#include <print>

using namespace std;

int main(void){
	float real, dolar, cotacao;
	
	print("Digite o valor do bem em Reais... : R$");
	cin >> real;
	cin.ignore(80,'\n');
	
	print("Digite o valor da cotacao........ : ");
	cin >> cotacao;
	cin.ignore(80,'\n');
	
	dolar = real / cotacao;
	
	println();
	println("Valor do bem em Dolar............ : ${:.2f}", dolar);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}
