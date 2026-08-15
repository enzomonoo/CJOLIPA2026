//C03EX04H

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int volume, comprimento, largura, altura;
	
	print("Digite o valor do Comprimento da caixa... : ");
	cin >> comprimento;
	cin.ignore(80,'\n');
	
	print("Digite o valor da Largura da caixa....... : ");
	cin >> largura;
	cin.ignore(80,'\n');
	
	print("Digite o valor da Altura da caixa........ : ");
	cin >> altura;
	cin.ignore(80,'\n');
	
	volume = comprimento * largura * altura;
	
	println();
	print("Volume total da caixa.................... :{}", volume);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}
