//C06EX07

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	int32_t idade = 23;
	int32_t *P_idade = nullptr;
	
	P_idade = &idade;
	
	printf("\nVariavel Idade..... : \%d", idade);
	printf("\nPonteiro P_idade... : \%p", P_idade);
	
	(*P_idade)++;
	
	printf("\nVariavel Idade..... : \%d", idade);
	printf("\nPonteiro P_idade... : \%p", P_idade);
	
	pausa();	
	return 0;
}
	
