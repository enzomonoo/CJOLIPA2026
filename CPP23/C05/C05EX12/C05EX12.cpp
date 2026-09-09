//C05EX12
 
#include <iostream>
#include <print>
 
using namespace std;

float a, b;

void pausa(void){
	println();
	print("Apenter [Enter] para encerrar...");
	cin.get();
}
 
 void soma(void){
	float r;
	
	println();
	print("Entre o primeiro numero... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Entre o segundo numero.... : ");
	cin >> b;
	cin.ignore(80,'\n');
 
	r = a + b;
	
	println("Resultado................. : {}", r);
 }
 
int main(void){
	print("Calculadora de Soma");
	soma();
	pausa();
	return 0;
}
