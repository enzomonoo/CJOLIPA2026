//C04EX03J

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a;
	
	print("Digite o valor desejado... : ");
	cin >> a;
	cin.ignore(80,'\n');
	println();
	
	if ((a % 2 ) == 0) println("Numero digitado PAR");
	else println("Numero digitado IMPAR");
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
