//C03EX04Q

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

const float PI = 3.14159265;

int main(void){
	float r, a;
	
	print("Digite o valor do raio da circunferencia... : ");
	cin >> r;
	cin.ignore(80, '\n');
	
	a = PI * pow(r, 2);
	
	println();
	print("Valor da area da circunferencia............ : {}", a);
	println();
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();	
	return 0;
}
