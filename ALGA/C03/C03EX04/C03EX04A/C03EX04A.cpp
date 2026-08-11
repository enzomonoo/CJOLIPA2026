//C03EX04A

#include <iostream>

using namespace std;

int main(void){
	float F, C;
	
	cout << "Digite a temperatura em C..." << endl;
	
	cin >> C;
	
	F = (C * 9 / 5) + 32;
	
	cout << "Temperatura em C : " << C << endl;
	cout << "Temperatura em F : " << F << endl;
	
	cout << endl; 
	cout << "Aperte [Enter] para encerrar...";
	cin.get();
	return 0;
}
