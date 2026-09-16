//C06EX11

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	int32_t A = 10;
	int32_t B = 20;

	int32_t *P_A = nullptr, *P_B = nullptr;
	
	P_A = &A;
	P_B = &B;
	
	printf("\nValor de P_A... : \%d \nno endereco.... : \%p", *P_A, &P_A);
	printf("\nValor de P_B... : \%d \nno endereco.... : \%p", *P_B, &P_B);
	
	*P_A = *P_B;
	
	println();
	printf("\nValor de P_A... : \%d \nno endereco.... : \%p", *P_A, &P_A);
	printf("\nValor de P_B... : \%d \nno endereco.... : \%p", *P_B, &P_B);
	
	pausa();	
	return 0;
}
