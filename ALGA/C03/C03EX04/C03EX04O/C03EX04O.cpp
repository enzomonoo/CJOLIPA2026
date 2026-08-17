//C03EX04O

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

int main(void){
	int a, b, c, d, p, s;
	
	print("Digite o valor da variavel A.................. : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor da variavel B.................. : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	print("Digite o valor da variavel C.................. : ");
	cin >> c;
	cin.ignore(80,'\n');
	
	print("Digite o valor da variavel D.................. : ");
	cin >> d;
	cin.ignore(80,'\n');
	
	p = a * c;
	s = b + d;
	
	
	println();
	print("Resultado do produto de {} e {}................. : {}", a, c, p);
	
	println();
	print("Resultado da soma de {} e {}.................... : {}", b, d, s);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}
