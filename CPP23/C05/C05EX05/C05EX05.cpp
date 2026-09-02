//C05EX05

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	println();
	print("Apenter [Enter] para encerrar...");
	cin.get();
}

uint64_t fatorial(int n){
	int i;
	uint64_t fat;
	fat = 1;
	for (i = 1; i <= n; i++) fat *= i;
	return fat;
}

int main(void){
	uint16_t x;
	
	println("Calculo de fatorial");
	print("Entre um valor inteiro... : ");
	cin >> x;
	cin.ignore(80,'\n');
	
	print("Fatorial de {} = a ", x);
	print("{}", fatorial(x));
	pausa();
	return 0;
}
