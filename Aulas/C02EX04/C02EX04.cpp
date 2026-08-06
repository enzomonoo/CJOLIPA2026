//C02EX02

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
		string nome;//Variável NOME do tipo CADEIA
		
        cout << "Olá.\nQual sua graça?" << endl;//\n gera uma nova linha
		getline(cin, nome);//Pega a linha e atribui a NOME
        
        cout << endl;
        cout << "Olá " << nome << " vamos estudar!" << endl;//Saida
        cout << endl;
        
        cout << "Pressione Enter Para Sair... ";
        cin.get();
        return 0;
}
