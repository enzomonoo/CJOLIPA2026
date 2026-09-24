//C07EX10

#include <iostream>
#include <vector>
#include <print>
#include <exception>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	vector<int32_t> matriz;
	int32_t valor;
	
	try{
		do{
			printf("Matriz[%lu]", matriz.size() + 1);
			print("\n(0 para encerrar)... : ");
			cin >> valor;
			cin.ignore(80,'\n');
			
			if (valor != 0) matriz.push_back(valor);
		} while (valor != 0);
		print("\nOs valores informados sao... : ");
		
		for(size_t i = 0; i < matriz.size(); ++i){
			printf("\nMatriz[%lu] = %i", i + 1, matriz[i]);
		}
	}
		
	catch (const bad_alloc &e){
		cerr << "*** Memoria insuficiente";
		cerr << e.what() << " ***" << endl;
	}	
	
	pausa();
	return 0;
}
