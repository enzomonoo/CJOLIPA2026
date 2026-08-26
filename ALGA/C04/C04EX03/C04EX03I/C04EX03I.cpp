//C04EX03I

#include <iostream>
#include <print>

using namespace std;

int main(void){
	int a, b, c, d, e;
	
	print("Digite o valor de A... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Digite o valor de B... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	print("Digite o valor de C... : ");
	cin >> c;
	cin.ignore(80,'\n');
	
	print("Digite o valor de D... : ");
	cin >> d;
	cin.ignore(80,'\n');
	
	print("Digite o valor de E... : ");
	cin >> e;
	cin.ignore(80,'\n');
	println();
	
	if (a >= b and a >= c and a >= d and a >= e) println("A variavel A ({}) e a maior", a);
	else if (b >= a and b >= c and b >= d and b >= e) println("A variavel B ({}) e a maior", b);
	else if (c >= a and c >= d and c >= d and c >= e) println("A variavel C ({}) e a maior", c);
	else if (d >= a and d >= b and d >= c and d >= e) println("A variavel D ({}) e a maior", d);
	else println("A variavel E ({}) e a maior", e);
	
	
	if (a <= b and a <= c and a <= d and a <= e) println("A variavel A ({}) e a menor", a);
	else if (b <= a and b <= c and b <= d and b <= e) println("A variavel B ({}) e a menor", b);
	else if (c <= a and c <= d and c <= d and c <= e) println("A variavel C ({}) e a menor", c);
	else if (d <= a and d <= b and d <= c and d <= e) println("A variavel D ({}) e a menor", d);
	else println("A variavel E ({}) e a menor", e);
	
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
	return 0;
}
