//C03EX04T

#include <iostream>
#include <print>

using namespace std;

int main(void){
	float distancia, tempo, velocidade;
	
	print("Digite a distancia.... : ");
	cin >> distancia;
	cin.ignore(80, '\n');
	
	print("Digite o tempo........ : ");
	cin >> tempo;
	cin.ignore(80, '\n');
	
	velocidade = (distancia * 100) / (tempo * 60);
	
	println();
	println("Velocidade atingida... : {:.2f} metros por segundo", velocidade);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();		
	return 0;
}
