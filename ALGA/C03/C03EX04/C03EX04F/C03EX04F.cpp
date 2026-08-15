//C03EX04F

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a, b, x;
	
	print("Digite o valor para a variavel A...:");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor para a variavel B...:");
	cin >> b;
	cin.ignore(80,'\n');
	
	println();
	println("Valor da variavel A................:{}",a);
	println("Valor da variavel B................:{}",b);
	println();
	
	x = a;
	a = b;
	b = x;
	
	println("Valor da variavel A apos a troca...:{}",a);
	println("Valor da variavel B apos a troca...:{}",b);
	println();
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}
