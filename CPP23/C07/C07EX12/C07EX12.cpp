//C07EX12

#include <iostream>
#include <iomanip>
#include <print>
#include <vector>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	size_t i, j;
	uint32_t linhas, colunas;
	
	print("Entre a quantidade de linhas.... : ");
	cin >> linhas;
	cin.ignore(80, '\n');
	
	print("Entre a quantidade de colunas... : ");
	cin >> colunas;
	cin.ignore(80, '\n');
	 
	vector<vector<uint32_t>>
		matriz(linhas, vector<uint32_t>(colunas));
	
	println();
	
	for (i = 0; i < linhas; i++){
		for (j = 0; j < colunas; j++){
			printf("Escreva o valor para matriz[%lu,%lu]... : ", i, j);
			cin >> matriz[i][j];
			cin.ignore(80, '\n');
		}
		println();
	}
	
	println();
	print("Os valores informados foram... : \n");
	
	for (i = 0; i < linhas; i++){
		for (j = 0; j < colunas; j++){
			printf(" Matriz [%lu,%lu] = %i", (i + 1), (j + 1), matriz[i][j]);
			println();
		}
		println();
	}
			
	pausa();
	return 0;
}

