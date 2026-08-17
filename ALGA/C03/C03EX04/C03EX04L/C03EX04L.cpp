//C03EX04L

#include <iostream>
#include <print>

using namespace std;

int main(void){
	float real, dolar, cotacao;
	
	print("Digite o valor do bem em Dolar... : $");
	cin >> dolar;
	cin.ignore(80,'\n');
	
	print("Digite o valor da cotacao........ : ");
	cin >> cotacao;
	cin.ignore(80,'\n');
	
	real = dolar * cotacao;
	
	println();
	println("Valor do bem em Reais............ : ${:.2f}", real);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}
