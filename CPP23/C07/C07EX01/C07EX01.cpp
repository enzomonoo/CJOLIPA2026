//C07EX01

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	float notas[8], soma = 0, media;
	
	println("Calculo de media escolar");
	
	for (size_t i = 0; i <=7; i++){
		print("Informe a {}a. nota... : ", i + 1);
		cin >> notas[i];
		cin.ignore(80,'\n');
		soma += notas[i];
	}
	
	media = soma / 8;
	
	println();
	println("Media do grupo = {:.2f}", media);
	
	pausa();
	return 0;
}
