n//C07EX03

#include <iostream>
#include <print>
#include <array>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	array<int32_t, 10> a, b;
	
	println("Exemplo de checagem de indice");
	
	for (size_t i = 0; i < a.size(); ++i){
		print("Informe o elemento... : ");
		cin >> a[i];
		cin.ignore(80,'\n');
	}
	
	for (size_t i = 0; i < a.size(); ++i){
		if (i % 2 == 0){
			b[i] = a[i] * 5;
		}
		else b[i] = a[i] + 5;
	}
	
	for (size_t i = 0; i < b.size(); ++i){
		if (i < 9){
			printf("\nB[%lu] = % 4i", i + 1, b[i]);
		}
		else{
			printf("\nB[%lu] = % 3i", i + 1, b[i]);
		}
	}
	
	pausa();
	return 0;
}
