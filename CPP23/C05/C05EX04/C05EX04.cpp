//C05EX04

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	println();
	print("Apenter [Enter] para encerrar...");
	cin.get();
}

void fatorial(uint16_t n, uint64_t &fat){
	uint64_t i;
	fat = 1;
	for (i = 1; i <= n; i++) fat *= i;
}

int main(void){
	uint16_t x;
	uint64_t y;
	
	println("Calculo de fatorial");
	print("Entre um valor inteiro... : ");
	cin >> x;
	cin.ignore(80,'\n');
	
	fatorial(x, y);
	println("Fatorial de {} = a {}", x, y);
	pausa();
	return 0;
}
