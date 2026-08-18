//C03EX04P

#include <iostream>
#include <print>

using namespace std;

int main(void){
	float sm, pr, ns;
	
	print("Digite o valor do salario mensal do trabalhador... : R$");
	cin >> sm;
	cin.ignore(80,'\n');
	
	print("Digite o percentual do reajuste a ser atribuido... :  %");
	cin >> pr;
	cin.ignore(80,'\n');
	
	ns = sm * (pr / 100);
	
	println();
	print("Valor do novo salario............................. : R${:.2f}", ns);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}
