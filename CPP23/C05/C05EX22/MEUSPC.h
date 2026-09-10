//MEUSPC
//Arquivo de cabecalho para namespace

#include <iostream>
#include <print>

using namespace std;


#ifndef __MEUSPC_h
#define __MEUSPC_h

namespace testespc{
	void subTeste(void){
		print("\nTeste no meuspc.");
		println();
		print("\nAperte [Enter] para encerrar...");
		cin.get();
	}
}

#endif // __MEUSPC_h
