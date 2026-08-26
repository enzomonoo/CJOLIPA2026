//C04EX03L

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a;
	
	print("Digite o valor desejado... : ");
	cin >> a;
	cin.ignore(80,'\n');
	println();
	
	if (not (a > 3)) print("Numero digitado... :  {}", a);
	
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
