#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 7
int main()
{
	int f;
	int r;
	int fre[size] = { 0 };
	srand(time(NULL));
	for (r = 1; r <= 6000;r++) {
		f = 1 + rand() % 6;
		++fre[f];
	}
	printf("%s%17s\n","Face","Frequency");
	for (f = 1; f < size;f++) {
		printf("%4d%17d\n",f,fre[f]);
	}
	system("pause");
	return 0;
}