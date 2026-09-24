//C07EX09

#include <iostream>
#include <vector>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	size_t tamanho;
	vector<float> matriz; // Ponteiro
	
	print("Entre a quatidade de elementos... : ");
	cin >> tamanho;
	cin.ignore(80,'\n');
	
	matriz.resize(tamanho);// Criacao da matriz dinanima
	
	println();
	
	for(size_t i = 0; i < tamanho; ++i){
		printf("Entre um valor para a variavel MATRIZ[%lu]... : ", i + 1);
		cin >> matriz[i];
		cin.ignore(80,'\n');
	}
	println();
	
	print("Os valores informados sao... : \n");
	
	for (size_t i = 0; i < tamanho; ++i){
		printf("Matriz[%lu] = %f\n", i + 1, matriz[i]);
	}

	pausa();
	return 0;
}
