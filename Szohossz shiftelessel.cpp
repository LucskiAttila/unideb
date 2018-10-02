#include <stdlib.h>
#include <string>
#include <iostream>


using namespace std;

int main()
{
	int i = 1;
	int sz = 0;
	while (i != 0){			
			i <<= 1;
			sz++;
			cout << i << endl;
	}
	cout << sz << " lepes utan lesz 0." << endl;
  return 0;
}
