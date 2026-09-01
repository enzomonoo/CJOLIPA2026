//Fibonacci

#include <iostream>
#include <print>

using namespace std;

int main(void){
	uint16_t valorSequencia;
	uint32_t proximo, i, a, b;
	
	do{
		println();		
		println("Programa de sequencia de Fibonacci");
		println("Digite 0 para sair.");
		print("Qual o numero de repeticoes desejado... : ");
		cin >> valorSequencia;
		cin.ignore(80,'\n');
		
		i = 1;
		a = 0;
		b = 1;
		if (valorSequencia > 0){
			for (i = 1; i <= valorSequencia; i++){
				if (i == valorSequencia){
					println("{} <<<", b);
				}
				else{
					println("{}", b);
				}
				proximo = a + b;
				a = b;
				b = proximo;
			}
		}
	}
	while(valorSequencia != 0);
}
