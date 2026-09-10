//C06EX01

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	int16_t idade = 23;
	int16_t *pidade = nullptr;
	pidade = &idade;
	
	printf("A idade %i esta armazenada", idade);
	printf("\nno endereco de memoria \%p", pidade);
	// "\%p" para imprimir valores de endereço de ponterios no printf
	
	
	pausa();	
	return 0;
}
	
