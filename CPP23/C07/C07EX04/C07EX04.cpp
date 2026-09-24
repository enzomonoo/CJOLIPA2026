//C07EX04

#include <iostream>
#include <print>
#include <array>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	array<int32_t, 5> a;
	int32_t soma = 0;
	
	println("Somatorio de elementos IMPARES");
	
	for (size_t i = 0; i < a.size(); ++i){
		printf("Informe o %luo elemento... : ", i + 1);
		cin >> a[i];
		cin.ignore(80,'\n');
	}
	
	for (size_t i = 0; i < a.size(); i++){
		if (a[i] % 2 != 0){
			soma += a[i];
		}
	}
	
	printf("\nA soma dos elementos IMPARES equivale a... : %i", soma);
	
	pausa();
	return 0;
}
