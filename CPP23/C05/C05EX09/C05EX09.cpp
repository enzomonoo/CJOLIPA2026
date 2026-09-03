//C05EX09

#include <iostream>
#include <print>
#include <iomanip>
#include <windows.h>

using namespace std;

int main(void){
	println("{:>14.10f}", pow(2.0, 3.0));
	println("{:>14.10f}", pow(2.0, 0.0));
	println();
	
	println("{:>14.10f}", sqrt(144));
	println("{:>14.10f}", sqrt(sqrt(16)));
	println();
	
	println("{:>14.10f}", cbrt(27));
	println("{:>14.10f}", cbrt(sqrt(16)));

    print("\nAperte [Enter] para encerrar...");
    cin.get();

    return 0;
}
