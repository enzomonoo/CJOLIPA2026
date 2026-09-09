//C05EX13
 
#include <iostream>
#include <print>
 
using namespace std;

int16_t a, b;

void pausa(void){
	println();
	print("Apenter [Enter] para encerrar...");
	cin.get();
}

void adicao(void){
	println();
	print("Resultado da soma... : {}", a + b);
}

