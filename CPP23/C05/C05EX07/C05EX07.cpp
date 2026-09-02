#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <print>

using namespace std;

int main()
{
    println("{:>14.10f}",acos(-1));
    println("{:>14.10f}",acos(0.5) * 180.0 / M_PI);
    println();

    println("{:>14.10f}",asin(-1));
    println("{:>14.10f}",asin(0.5) * 180.0 / M_PI);
	println();

    println("{:>14.10f}",atan(0.5));
    println("{:>14.10f}",atan(1.0) * 180.0 / M_PI);
	println();
	
    println("{:>14.10f}",atan2(1.0, 1.0));
    println("{:>14.10f}",atan2(-1.0, -1.0));
	println();
	
    println("{:>14.10f}",atan(45.0 * M_PI) / 180.0);
	println();
	
    println("{:>14.10f}",cos(45.0 * M_PI) / 180.0);
    println("{:>14.10f}",cos(atan(1.0)));
	println();
	
    println("{:>14.10f}",sin(M_PI / 6.0));
    println("{:>14.10f}",sin(1.0));
	println();
	
    println("{:>14.10f}",tan(4.0));
    println("{:>14.10f}",sin(M_PI / 41.0));
	println();
	
    println();
    print("Aperte [Enter] para encerrar...");
    cin.get();

    return 0;
}
