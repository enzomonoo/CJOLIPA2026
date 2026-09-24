//C07EX05

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	float nota[9][4];
	size_t i, j;
	
	println("Leitura das notas");
	
	for (i = 0; i <= 8; i++){
		printf("Informe as notas do %luo aluno... : ", i + 1);
		for (j = 0; j <= 3; j++){
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
	
	for(i = 0; i <= 8; i++){
		printf("%5lu", i + 1);
		for (j = 0; j <= 3; j++){
			printf("%11.2f ", nota[i][j]);
		}
		println();
	}
	
	pausa();
	return 0;
}
