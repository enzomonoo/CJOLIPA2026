//C06EX10

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	int32_t A = 1;
	float B = 2.5;
	
	void *P_G = nullptr;
	
	P_G = &A;
	printf("\nValor Inteiro... : \%d", *(int32_t *)P_G);
	
	P_G = &B;
	printf("\nValor Real...... : \%f", *(float *)P_G);
		
	pausa();	
	return 0;
}
