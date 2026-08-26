//C04EX03H

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a, b, c, d;
	
	print("Digite o valor de A... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor de B... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	print("Digite o valor de C... : ");
	cin >> c;
	cin.ignore(80,'\n');
	
	print("Digite o valor de D... : ");
	cin >> d;
	cin.ignore(80,'\n');
	println();	
		
	if (((a % 2) == 0) or ((a % 3) == 0)) println("O valor de A ({}) e divisivel por 2 e/ou 3", a);
	if (((b % 2) == 0) or ((b % 3) == 0)) println("O valor de B ({}) e divisivel por 2 e/ou 3", b);
	if (((c % 2) == 0) or ((c % 3) == 0)) println("O valor de C ({}) e divisivel por 2 e/ou 3", c);
	if (((d % 2) == 0) or ((d % 3) == 0)) println("O valor de D ({}) e divisivel por 2 e/ou 3", d);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
