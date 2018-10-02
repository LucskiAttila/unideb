#include <unistd.h>
#include "../std_lib_facilities.h"

void printXToPosInScreen(int x, int y, int w, int h, string str){
	int i;
	system("clear");
	for(i = 0; i < y; i++) cout << endl;
	for(i = 0; i < x; i++) cout << " ";
	cout << str << endl;
	for(i = y + 1; i < h; i++) cout << endl;
}

int main()
{
	int maxX = 80;
	int maxY = 23;
	int egyx = 1, egyy = -1, x = 1, y = 10;
	int ty[maxY], tx[maxX];
	int i;
	for(i=1; i < maxY; i++) ty[i]=1; ty[1]=-1; ty[maxY - 1]=-1;
	for(i=1; i < maxX; i++) tx[i]=1; tx[1]=-1; tx[maxX - 1]=-1;
	while(1){
		printXToPosInScreen(x, y, maxX, maxY, "X");
		x += egyx;
		y += egyy;
		egyx *= tx[x];
		egyy *= ty[y];
		usleep(30000);
	}
	return 0;
}
