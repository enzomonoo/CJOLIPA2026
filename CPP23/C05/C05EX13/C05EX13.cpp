//C05EX13
 
#include <iostream>
#include <print>
 
using namespace std;

void pausa(void){
	println();
	print("Apenter [Enter] para encerrar...");
	cin.get();
}
 
int main(void){
	int x;
	
	print("Entre valor para X... : ");
	cin >> x;
	cin.ignore(80,'\n');
	
	if (x > 5){
		int y = 20;// Variavel em escopo de bloco (bloco if)
		print("[X]... : {}", x + y);
	}
	else print("[X]... : {}", x);
	
	pausa();
	return 0;
}
