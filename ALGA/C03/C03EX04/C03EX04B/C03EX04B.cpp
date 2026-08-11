//C03EX04B

#include <iostream>

using namespace std;

int main(void){
	float C, F;
	
	cout << "Digite a temperatura em F..." << endl;
	
	cin >> F;
	
	C = (F - 32) * 5 / 9;
	
	cout << "Temperatura em F : " << F << endl;
	cout << "Temperatura em C : " << C << endl;
	
	cout << endl; 
	cout << "Aperte [Enter] para encerrar...";
	cin.get();
	return 0;
}
