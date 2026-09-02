//C05EX03

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	println();
	print("Apenter [Enter] para encerrar...");
	cin.get();
}

void fatorial(uint16_t n){
	uint64_t fat {1};
	for (uint16_t i = 1; i <= n; i++) fat *= i;
	println("Fatorial de {} = a: {}", n, fat);
}

int main(void){
	uint16_t x;
	
	println("Calculo de fatorial");
	print("Entre um valor inteiro... : ");
	cin >> x;
	cin.ignore(80,'\n');
	
	fatorial(x);
	fatorial(6);
	pausa();
	return 0;
}
