//C07EX06

#include <iostream>
#include <print>
#include <array>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	array<array<float, 4>, 10> nota;
	
	size_t i, j;
	
	println("Leitura das notas");
	
	for (i = 0; i < nota.size(); i++){
		printf("Informe as notas do %luo aluno... : ", i + 1);
		for (j = 0; j < nota[i].size(); j++){
			printf("%lua Nota... : ", j + 1);
			cin >> nota[i][j];
			cin.ignore(80,'\n');
		}
	}
	
	println("\nApresentaçao de notas");
	print("| Aluno  ");
	print("| Nota 1 ");
	print("| Nota 2 ");
	print("| Nota 3 ");
	print("| Nota 4 |");
	println();
	
	for(i = 0; i < nota.size(); i++){
		printf("%5lu", i + 1);
		for (j = 0; j < nota[i].size(); j++){
			printf("%11.2f ", nota[i][j]);
		}
		println();
	}
	
	
	
	pausa();
	return 0;
}
