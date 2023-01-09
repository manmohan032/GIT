#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a=6,b=8,c=9;
	for(c=2;c<4;c++)
	{
		b=a+b;
		if((b-a-c)<(9+b))
		{
			b=(b&7)+b;
			b=(10+6)+b;
		}
	}
	cout<<a+b<<endl;
	return 0;
}
