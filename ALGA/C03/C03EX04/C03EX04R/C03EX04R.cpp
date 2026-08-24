//C03EX04R

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a, b, c, votosNulos, votosBrancos, totalEleitores;
	float percentualA, percentualB, percentualC, percentualNulos, percentualBrancos, percentualValidos;
	
	print("Informe o número de votos para o candidato A... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Informe o número de votos para o candidato B... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	print("Informe o número de votos para o candidato C... : ");
	cin >> c;
	cin.ignore(80,'\n');
	
	print("Informe o número de votos nulos................ : ");
	cin >> votosNulos;
	cin.ignore(80,'\n');
	
	print("Informe o número de votos em branco............ : ");
	cin >> votosBrancos;
	cin.ignore(80,'\n');
	println();
	
	totalEleitores = a + b + c + votosBrancos + votosNulos;
	percentualValidos = (static_cast<float>(a + b + c) / (totalEleitores)) * 100;
	percentualA = (static_cast<float>(a) / totalEleitores) * 100;
	percentualB = (static_cast<float>(b) / totalEleitores) * 100;
	percentualC = (static_cast<float>(c) / totalEleitores) * 100;
	percentualNulos = (static_cast<float>(votosNulos) / totalEleitores) * 100;
	percentualBrancos = (static_cast<float>(votosBrancos) / totalEleitores) * 100;
	
	println("Total de eleitores.............................. : {}", totalEleitores);
	println("Percentual de votos validos..................... : {:.2f}%", percentualValidos);
	println("Percentual do candidato A....................... : {:.2f}%", percentualA);
	println("Percentual do candidato B....................... : {:.2f}%", percentualB);
	println("Percentual do candidato C....................... : {:.2f}%", percentualC);
	println("Percentual dos votos nulos...................... : {:.2f}%", percentualNulos);
	println("Percentual dos votos em branco.................. : {:.2f}%", percentualBrancos);
		
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();	
	return 0;
}
