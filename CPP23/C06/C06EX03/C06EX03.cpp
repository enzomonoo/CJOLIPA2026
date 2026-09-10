//C06EX03

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
	
	printf("A idade %i esta armazenada", *pidade);
	printf("\nno endereco de memoria \%p", pidade);
	
	pausa();	
	return 0;
}
	
