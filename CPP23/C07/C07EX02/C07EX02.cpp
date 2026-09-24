//C07EX02

#include <iostream>
#include <print>
#include <array>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	array<float, 8> notas; // Define a array com 8 elementos
	float soma = 0, media;
	
	println("Calculo de media escolar");
	
	for (size_t i = 0; i < notas.size(); i++){
		print("Informe a {}a. nota... : ", i + 1);
		cin >> notas[i];
		cin.ignore(80,'\n');
		soma += notas[i];
	}
	
	media = soma / notas.size();
	
	println();
	println("Media do grupo = {:.2f}", media);
	
	pausa();
	return 0;
}
