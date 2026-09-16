//C06EX05

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	int32_t A;
	int32_t *P_A = &A;
	
	printf("Entre um valor Inteiro... : ");
	cin >> *P_A;
	cin.ignore(80,'\n');
	
	printf("Valor informado.......... : %d", A);
	
	pausa();	
	return 0;
}
