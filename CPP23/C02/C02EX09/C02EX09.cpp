//C02EX09

#include <iostream>
#include <iomanip> // Biblioteca para o Alinhamento, Fixação e Extenção
				   // input output manipulation (iomanip)
using namespace std;

int main(void){
	float ht, vh, pd, td, sb, sl;
	
	cout << setprecision(2) << fixed << right; // Setagem da Formatação
	//      Casas Decimais     Fixação  Alinhamento
	
	int8_t w;
	w = 8; // Variável para o tamanho de casas em branco para os números
	
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
	cout << "Salário Bruto ..... : " << setw(w) << sb << endl;
	cout << "Desconto .......... : " << setw(w) << td << endl;
	cout << "Salário Líquido ... : " << setw(w) << sl << endl;
	
	std::cout << std::endl;
	std::cout << "Aperte [Enter] para encerrar...";
	std::cin.get();
	
	return 0; // Retorno de Valor (0) com sucesso
}
