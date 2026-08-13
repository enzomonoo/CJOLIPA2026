//C02EX10

#include <iostream>// Comandos com # são diretivos e direcionam o 
				   // compilador a fazer algo específico
#include <cmath>   // Biblioteca para o pow()

using namespace std;

const float PI = 3.141592; //Constantes sempre em MAIÚSCULO

/*snake_case -> valor_de_desconto
  PascalCase -> ValorDeDesconto
  camelCase -> valorDeDesconto
*/

int main(void){
	float v, h, r; // Variáveis sempre em camelCase
	
	cout << "Entre a altura... : ";
	cin >> h;
	cin.ignore(80, '\n');
	
	cout << "Entre o raio ..... : ";
	cin >> r;
	cin.ignore(80, '\n');
	
	v = h * PI * pow(r, 2);
	
	cout << "Area do Cilindro .: " << v << endl;
	
	std::cout << std::endl;
	std::cout << "Aperte [Enter] para encerrar...";
	std::cin.get();
	
	return 0; // Retorno de Valor (0) com sucesso
}
