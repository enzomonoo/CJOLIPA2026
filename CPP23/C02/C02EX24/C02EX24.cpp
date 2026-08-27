//C02EX24

#include <iostream>
#include <print>

using namespace std;

int main(void){
	println("Real {1:8.2f} - Inteiro {0}", 1, 1.5);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
