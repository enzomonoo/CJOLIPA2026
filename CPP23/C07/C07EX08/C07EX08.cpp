//C07EX08

#include <iostream>
#include <array>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	size_t tamanho;
	float *pmatriz; // Ponteiro
	
	print("Entre a quatidade de elementos... : ");
	cin >> tamanho;
	cin.ignore(80,'\n');
	
	pmatriz = new float[tamanho];// Criacao da matriz dinanima
	
	println();
	
	for(size_t i = 0; i <= tamanho - 1; ++i){
		printf("Entre um valor para a variavel MATRIZ[%lu]... : ", i + 1);
		cin >> pmatriz[i];
		cin.ignore(80,'\n');
	}
	println();
	
	print("Os valores informados sao... : \n");
	
	for (size_t i = 0; i <= tamanho - 1; ++i){
		printf("Matriz[%lu] = %f\n", i + 1, pmatriz[i]);
	}
	
	delete [] pmatriz;
	
	pausa();
	return 0;
}
