//C07EX07

#include <iostream>
#include <array>
#include <string>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	array<string, 10> nome;
	size_t i;
	
	println("Leitura e apresentacao de nomes");
	
	for (i = 0; i < nome.size(); i++){
		printf("Informe o %luo nome... : ", i + 1);
		getline(cin, nome[i]);
	}
	
	println();
	
	for (i = 0; i < nome.size(); i++){
		printf("%luo Nome... : %s\n", i + 1, nome[i].c_str());
		//c_str() para que seja imprimido utilizando printf
	}
	
	pausa();
	return 0;
}
