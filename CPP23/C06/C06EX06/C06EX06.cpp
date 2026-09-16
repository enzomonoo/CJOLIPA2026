//C06EX06

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	int32_t	A = 1;
	int32_t *P_A = nullptr;
	
	P_A = &A;
	
	printf("\nEnedeço Atual................ : \%p", P_A);
	
	P_A++;
	printf("\nProximo Endereco a Frente.... : \%p", P_A);
	
	P_A++;
	printf("\nProximo Endereco a Frente.... : \%p", P_A);
	
	P_A--;
	printf("\nProximo Endereco para Tras... : \%p", P_A);
	
	P_A--;
	printf("\nProximo Endereco para Tras... : \%p", P_A);
	
	pausa();	
	return 0;
}
