//C06EX08

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	int32_t A = 1;
	int32_t *P_A = &A;
	
	printf("\nEndereco Atual .............. : \%p", P_A);
	
	*(P_A += 10);
	printf("\nProximo Endereco a frente.... : \%p", P_A);
	
	*(P_A += 10);
	printf("\nProximo Endereco a frente.... : \%p", P_A);
	
	*(P_A -= 10);
	printf("\nProximo Endereco para tras... : \%p", P_A);
	
	*(P_A -= 10);
	printf("\nProximo Endereco para tras... : \%p", P_A);
	
	pausa();	
	return 0;
}
	
