// C02EX16

#include <iostream>
#include <print>

int main(void)
{
	std::string nome = "Enzo Monoo";
	uint16_t idade = 23;
	
	std::print("{} possui {} anos.\n", nome, idade);
	
	std::println("");
	std::print("Aperte [Enter] para encerrar... ");
	std::cin.get();
	return 0;
}
