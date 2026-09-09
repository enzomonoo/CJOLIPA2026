//C05EX16
 
#include <iostream>
#include <print>
 
using namespace std;

void incremento(void){
	static int r = 1;// Variavel estatica (iniciada apenas uma vez)
	println("Valor de R... : {: >8}", r);
	++r;
}

void pausa(void){
	println();
	print("Apenter [Enter] para encerrar...");
	cin.get();
}
	
int main(void){
	for(int i = 1; i <=10; i++) incremento();	
	pausa();
	return 0;
}
