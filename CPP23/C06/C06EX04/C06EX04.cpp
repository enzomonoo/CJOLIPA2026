//C06EX04

#include <iostream>
#include <print>

using namespace std;

void pausa(void){
	print("\nAperte [Enter] para encerrar...");
	cin.get();
}

int main(void){
	char		c, *pc;
	int32_t		i, *pi;
	int16_t		s, *ps;
	float		f, *pf;
	double		d, *pd;
	int64_t		l, *pl;
	bool		b, *pb;
	
	printf("Tamanho 'Char'............ : %li", sizeof(c));
	printf(" bytes\n");
	
	printf("Tamanho 'Integer'......... : %li", sizeof(i));
	printf(" bytes\n");
	
	printf("Tamanho 'Short'........... : %li", sizeof(s));
	printf(" bytes\n");
	
	printf("Tamanho 'Float'........... : %li", sizeof(f));
	printf(" bytes\n");
	
	printf("Tamanho 'Double'.......... : %li", sizeof(d));
	printf(" bytes\n");
	
	printf("Tamanho 'Long Double'..... : %li", sizeof(l));
	printf(" bytes\n");
	
	printf("Tamanho 'Bool'............ : %li", sizeof(b));
	printf(" bytes\n");
	
	println();
	
	printf("Tamanho 'P Char'.......... : %li", sizeof(pc));
	printf(" bytes\n");
	
	printf("Tamanho 'P Integer'....... : %li", sizeof(pi));
	printf(" bytes\n");
	
	printf("Tamanho 'P Short'......... : %li", sizeof(ps));
	printf(" bytes\n");
	
	printf("Tamanho 'P Float'......... : %li", sizeof(pf));
	printf(" bytes\n");
	
	printf("Tamanho 'P Double'........ : %li", sizeof(pd));
	printf(" bytes\n");
	
	printf("Tamanho 'P Long Double'... : %li", sizeof(pl));
	printf(" bytes\n");
	
	printf("Tamanho 'P Bool'.......... : %li", sizeof(pb));
	printf(" bytes\n");
	
	pausa();
}
