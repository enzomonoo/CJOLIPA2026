//C04EX03O

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a;
	
	print("Digite o valor desejado... : ");
	cin >> a;
	cin.ignore(80,'\n');
	println();
	
	if (a * 2 >= 30) print("Resultado................. : {}",a * 2);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
