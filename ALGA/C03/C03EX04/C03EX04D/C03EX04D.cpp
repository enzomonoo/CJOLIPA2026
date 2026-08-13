//C03EX04C

#include <iostream>
#include <print>

using namespace std;

int main(void){
	float tempo, velocidade, distancia, litrosUsados;
	
	print("Digite o tempo de viagem.... : ");
	cin >> tempo;
	cin.ignore(80, '\n');
	
	print("Digite a velocidade média... : ");
	cin >> velocidade;
	cin.ignore(80, '\n');
	println("");
	
	distancia = tempo * velocidade;
	litrosUsados = distancia / 12;
	
	println("Velocidade Mèdia................. : {: >8.2f}", velocidade);
	println("Tempo Gasto na Viagem............ : {: >8.2f}", tempo);
	println("Distância Percorrida............. : {: >8.2f}", distancia);
	println("Quantidade de Litros Utilizada... : {: >8.2f}", litrosUsados);
	
	println("");
    print("Aperte [Enter] para encerrar... ");
    cin.get();
    return 0;
}
