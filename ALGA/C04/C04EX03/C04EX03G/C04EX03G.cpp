//C04EX03G

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a, b, c;
	
	print("Digite o valor de A... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor de B... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	print("Digite o valor de C... : ");
	cin >> c;
	cin.ignore(80,'\n');
	println();
	
	if (((a % 2) == 0) && (a % 3) == 0) println("O valor de C ({}) e divisivel por 2 e 3.", a);
	if (((b % 2) == 0) && (b % 3) == 0) println("O valor de B ({}) e divisivel por 2 e 3.", b);
	if (((c % 2) == 0) && (c % 3) == 0) println("O valor de C ({}) e divisivel por 2 e 3.", c);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
