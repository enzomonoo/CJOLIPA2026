//C04EX03C

#include <iostream>
#include <print>

using namespace std;

int main(void){
	float n1, n2, n3, n4, md1;
	
	print("Digite o valor da N1...... : ");
	cin >> n1;
	cin.ignore(80, '\n');
	
	print("Digite o valor da N2...... : ");
	cin >> n2;
	cin.ignore(80, '\n');
	
	print("Digite o valor da N3...... : ");
	cin >> n3;
	cin.ignore(80, '\n');
	
	print("Digite o valor da N4...... : ");
	cin >> n4;
	cin.ignore(80, '\n');
	println();
	
	md1 = (n1 + n2 + n3 + n4) / 4;
	
	if (md1 < 7) print ("Aluno reprovado com uma nota de... :  {:.2f}", md1);
	else print("Aluno aprovado com uma nota de........ :  {:.2f}", md1);
	
	println();
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
