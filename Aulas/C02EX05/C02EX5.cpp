//C02EX02

#include <iostream>
#include <string> // para usar std::wstring
#include <windows.h> // para SetConsoleCP
#include <locale> // Para setlocale()


using namespace std;

int main(void)
{
		wstring nome;
		
		setlocale(LC_ALL, "Portuguese_Brazil.1252");
		SetConsoleCP(1252);
		
        wcout << L"Olá.\nQual sua graça?" << endl;
		getline(wcin, nome);
        
        cout << endl;
        cout << L"Olá " << nome << L" vamos estudar!" << endl;//Saida
        cout << endl;
        
        cout << "Pressione Enter Para Sair... ";
        cin.get();
        return 0;
}
