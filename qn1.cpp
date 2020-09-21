#include <iostream>
using namespace std;

int main(){
	unsigned int a=5674956785;
	unsigned int b=-1;
	int c=234567432123456;
	int d=-234567432123456;
	unsigned char e='5674956785';
	unsigned char f='-1';
	char g='%%';
	char h='&&';
	unsigned short i=70000;
	unsigned short j=-70000;
	short k=-35000;
	short l=35000;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	cout<<g<<endl;
	cout<<h<<endl;
	cout<<i<<endl;
	cout<<j<<endl;
	return 0;
}
/*since the values keyed-in overflow and underflow the memory limit, the values are truncated to fit within the limits hence it gives an incorrect output.*/
