//C05EX02

#include <iostream>
#include <print>

using namespace std;

float r, a, b; //Variaveis de escopo global

void entrada(void){
	println();
	print("Entre um valor para a variavel A... : ");
	cin >> a;
	cin.ignore(80,'\n');
	print("Entre um valor para a variavel B... : ");
	cin >> b;
	cin.ignore(80,'\n');
}

void pausa(void){
	println();
	print("Aperte [Enter] para encerrar...");
	cin.get();
}

void saida(void){
	println();
	println("Resultado de {} e {} = {}", a, b, r);
	pausa();
}

float calculo(float a, float b, char operador){
	switch (operador){
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return a / b;
		default: return 0.0; // Valor default de retorno
	}
}


void rotadicao(void){
	println();
	println("Rotina de Adicao");
	println("----------------");
	entrada();
	r = calculo	(a, b, '+');
	saida();
}

void rotsubtracao(void){
	println();
	println("Rotina de Subtracao");
	println("-------------------");
	entrada();
	r = calculo	(a, b, '-');
	saida();
}

void rotmultiplicacao(void){
	println();
	println("Rotina de Multiplicacao");
	println("-----------------------");
	entrada();
	r = calculo	(a, b, '*');
	saida();
}

void rotdivisao(void){
	println();
	println("Rotina de Divisao");
	println("-----------------------");
	entrada();
	if (b == 0){
		println();
		println("Erro, divisao por 0");
		pausa();
	}
	else{
		r = calculo	(a, b, '/');
		saida();
	}
}

int main(void){
	uint16_t opcao = 0;// opcao se inicia com o valor de 0
	
	while (opcao == 0){
		system("clear");
		println("-----------------------");
		println("Programa de Calculadora");
		println("     Menu Principal    ");
		println("-----------------------");
		println();
		
		println("[1] - Adicao");
		println("[2] - Subtracao");
		println("[3] - Multiplicacao");
		println("[4] - Divisao");
		println();
		print("Digite uma opcao...... : ");
		cin >> opcao;
		cin.ignore(80,'\n');
		
		if (opcao != 5){
			switch (opcao){
				case 1 : rotadicao();			break;
				case 2 : rotsubtracao();		break;
				case 3 : rotmultiplicacao();	break;
				case 4 : rotdivisao();			break;
				}
			}
		}
	return 0;	
}
