//C04EX03F

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a, b, c, x;
	
	print("Digite o valor de A... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor de B... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	print("Digite o valor de C... : ");
	cin >> c;
	cin.ignore(80,'\n');
	
	if (a > b){
		x = a;
		a = b;
		b = x;
	}
	if (b > c){
		x = b;
		b = c;
		c = x;
	}
	if (a > b){
		x = a;
		a = b;
		b = x;
	}
	
	println();
	print("Nova ordem............ :  {} {} {}",a, b, c);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
