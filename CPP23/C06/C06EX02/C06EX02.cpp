//C06EX02

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
	
	
	printf("Idade.... : \%i Endereco... : \%p", idade, &idade);
	printf("\nPIdade... : \%i Endereco... : \%p", *pidade, &pidade);
	// "\%p" para imprimir valores de endereço de ponterios no printf
	
	pausa();	
	return 0;
}
	
