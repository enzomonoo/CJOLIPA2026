//C03EX04E

#include <iostream>
#include <print>

using namespace std;

int main(void){
	float prestacao, valor, taxa, tempo;
	
	print("Digite o Valor... : ");
	cin >> valor;
	cin.ignore(80,'\n');
	
	print("Digite a Taxa.... : ");
	cin >> taxa;
	cin.ignore(80,'\n');
	
	print("Digite o Tempo... : ");
	cin >> tempo;
	cin.ignore(80,'\n');
	
	prestacao = valor + (valor * (taxa / 100) * tempo);
	
	println("");
	println("Valor do Bem......... : {: >8.2f}", valor);
	println("Valor do Taxa........ : {: >8.2f}", taxa);
	println("Valor do Tempo....... : {: >8.2f}", tempo);
	println("Valor do Prestacao... : {: >8.2f}", prestacao);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}
