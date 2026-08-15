//C03EX04C

#include <iostream>
#include <print>
#include <cmath>

using namespace std;

const float PI = 3.14159;

int main(void){
	float volume, altura, r;
	
	print("Entre a Altura... : ");
	cin >> altura;
	cin.ignore(80, '\n'); // Limpa o buffer da tecla enter
	
	print("Entre o Raio... : ");
	cin >> r;
	cin.ignore(80, '\n'); // Limpa o buffer da tecla enter
	println("");
	
	volume = PI * altura * pow(r, 2);
	
	print("Volume total da lata de oleo... : {}", volume);
	
	println("");
    print("Aperte [Enter] para encerrar... ");
    cin.get();
    return 0;
}
