//C03EX04S

#include <iostream>
#include <print>

using namespace std;

int main(void){
	float a, b, soma, subtracao, multiplicacao, divisao;
	
	print("Digite o valor da variavel A... : ");
	cin >> a;
	cin.ignore(80, '\n');
	
	print("Digite o valor da variavel B... : ");
	cin >> b;
	cin.ignore(80, '\n');
	
	soma = a + b;
	subtracao = a - b;
	multiplicacao = a * b;
	divisao = a / b;
	
	println();
	println("Soma de {} com {}............ : {}", a, b, soma);
	println("Subtracao de {} com {}....... : {}", a, b, subtracao);
	println("Multiplicacao de {} com {}... : {}", a, b, multiplicacao);
	println("Divisao de {} com {}......... : {}", a, b, divisao);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();		
	return 0;
}
