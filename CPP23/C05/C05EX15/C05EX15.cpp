//C05EX15
 
#include <iostream>
#include <print>
 
using namespace std;

extern int16_t a, b;

extern void adicao(void);
extern void pausa(void);

int main(void){
	print("Entre o primeiro valor... : ");
	cin >> a;
	cin.ignore(80,'\n');
	
	print("Entre o segundo valor.... : ");
	cin >> b;
	cin.ignore(80,'\n');
	
	adicao();
	pausa();
	
	return 0;
}
	
