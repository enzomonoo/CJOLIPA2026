//C04EX03M

#include <iostream>
#include <print>
#include <string>
#include <cctype>

using namespace std;

int main(void){
	string nome;
	char sexo;
	
	print("Digite o seu nome... : ");
	cin >> nome;
	cin.ignore(80, '\n');
	
	print("Digite o seu sexo... : ");
	sexo = cin.get();
	cin.ignore();
	
	if (toupper(sexo) == 'M') print("Ilmo. Sr. {}", nome);
	else if (toupper(sexo) == 'F') print("Ilma. Sra. {}", nome);
	else print("Sexo informado invalido.");
	println();
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
