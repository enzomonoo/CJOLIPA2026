//C03EX04U

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

int main(void){
	float raio, volume;
	
	print("Digite o raio da esfera.... : ");
	cin >> raio;
	cin.ignore(80, '\n');
	
	volume = ((4.0 / 3.0) * 3.14159) * pow(raio,3);
	
	println();
	println("Volume da esfera........... : {:.2f}", volume);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();	
	return 0;
}
