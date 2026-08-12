//C01EX03

#include <iostream>		// Importado para std::crr, std::cout e std::endl
#include <cstdlib>		// Importado para std::atof
#include <stdexcept>	// Importado para std::invalid_argument


int main(int argc, char* argv[]){
	if(argc != 4){
		std::cerr << "Uso: " << argv[0] << "<valor1> <valor2> <operador>" << std::endl;
		return 1; // Retorna 1 como erro
	}
	// Converte os argumentos de string para float (real)
	double valor1 = std::atof(argv[1]);
	double valor2 = std::atof(argv[2]);
	char operador = argv[3][0];// Define: operador como o primeiro caracter do argumento
	
	double resultado;
	
	// Realiza a operação com base no operador fornecido
	
	switch (operador){
		case '+':
			resultado = valor1 + valor2;
			break;
		case '-':
			resultado = valor1 - valor2;
			break;
		case '*':
			resultado = valor1 * valor2;
			break;
		case '/':
			if (valor2 == 0){
				std::cerr << "Erro: Divisão por 0" << std::endl;
				return 1;// Retorno de erro
			}
			else{
				resultado = valor1 / valor2;
			}
			break;
		default:
			std::cerr << "Erro: Operador inválido, utilize + - * ou /." << std::endl;
			return 1; // Retorno de erro
	}
	
	// Exibe o resultado da operação
	
	std::cout << "Resultado: " << resultado << std::endl;
	
	std::cout << std::endl;
	std::cout << "Aperte [Enter] para encerrar...";
	std::cin.get();
	
	return 0; // Retorno de Valor (0) com sucesso
}
