//C02EX07

#include <iostream>

using namespace std;

int main(void)
{
		int32_t a, b, r;
		
		cout << "Informe valor para a variável <A>: ";
		cin << a;
		cin.ignore(80, '\n');// Ignora o "Resto" da tecla ENTER
		
		cout << "Informe valor para a variável <B>: ";
		cin << b;
		cin.ignore(80, '\n');// Ignora o "Resto" da tecla ENTER
		
		cout << endl;
        wcout << L"Pressione Enter Para Sair... ";
        cin.get();
        return 0;
}
