//C02EX08

#include <iostream>		// Importado para std::crr, std::cout e std::endl
using namespace std;

int main(void){
	float ht, vh, pd, td, sb, sl;
	
	cout << "Entre a quantidade de horas trabalhadas... : ";
	cin >> ht;
	cin.ignore(80, '\n');
	
	cout << "Entre o valor da hora de trabalho... : ";
	cin >> vh;
	cin.ignore(80, '\n');
	
	cout << "Entre o valor percentual do desconto... : ";
	cin >> pd;
	cin.ignore(80, '\n');
	
	sb = ht * vh;
	td = (pd / 100) * sb;
	sl = sb - td;
	
	cout << "\n";
	cout << "Salário Bruto ..... : " << sb << endl;
	cout << "Desconto .......... : " << td << endl;
	cout << "Salário Líquido ... : " << sl << endl;
	
	std::cout << std::endl;
	std::cout << "Aperte [Enter] para encerrar...";
	std::cin.get();
	
	return 0; // Retorno de Valor (0) com sucesso
}
