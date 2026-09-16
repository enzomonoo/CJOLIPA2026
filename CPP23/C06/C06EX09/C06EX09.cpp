//C06EX09

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	int32_t idade = 23;
	int32_t *P_idade1 = nullptr, *P_idade2 = nullptr;
	
	P_idade1 = &idade;
	P_idade2 = P_idade1;
	
	printf("\nVariavel Idade...... : \%d", idade);
	printf("\nPonteiro P_Idade1... : \%p", P_idade1);
	printf("\nPonteiro P_Idade2... : \%p", P_idade2);
	
	pausa();	
	return 0;
}
