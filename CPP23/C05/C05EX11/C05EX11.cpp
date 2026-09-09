//C05EX11
 
#include <iostream>
#include <print>
 
using namespace std;

float a, b, r;

void pausa(void){
	println();
	print("Apenter [Enter] para encerrar...");
	cin.get();
}
 
 void soma(void){
	println();
	print("Entre o primeiro numero... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Entre o segundo numero.... : ");
	cin >> b;
	cin.ignore(80,'\n');
 
	r = a + b;
 }
 
int main(void){
	print("Calculadora de Soma");
	soma();
	println("Resultado................. : {}", r);
	pausa();
	return 0;
}
