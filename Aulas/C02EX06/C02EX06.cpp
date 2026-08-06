//C02EX06

#include <iostream>
#include <cwchar>

using namespace std;

int main(void)
{
		
		setlocale(LC_ALL, ".1242");
		
		wchar_t caractere1 = L'\u00AE';
		wchar_t caractere2 = L'\U000000AE';
		wchar_t caractere3 = L'\xAE';
		wchar_t frase[19] = L"Marca registrada \u00AE";
		
		wcout << L"Caractere1 ...: " << caractere1 << endl;
		wcout << L"Caractere2 ...: " << caractere2 << endl;
		wcout << L"Caractere3 ...: " << caractere3 << endl;
		wcout << L"Texto ........: " << frase << endl;
		
		cout << endl;
        wcout << L"Pressione Enter Para Sair... ";
        cin.get();
        return 0;
}
