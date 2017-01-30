#include <iostream>
#include <string>
using namespace std;
int main()
{
	string isim,soyisim;
	std::cout<<"what is your name?"<<endl;
	std::cin>> isim;
	std::cout<<"what is your surname?"<<endl;
	std::cin>> soyisim;
	std::cout<<"your name is: "<<isim<<" and surname is "<<soyisim;
	return 0;
}