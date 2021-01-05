#include <stdio.h>

int main(int argc, char *argv[])
{

	int a[10][10];
	int i = 0;	

	for (int y = 0; y < 10; y++) 
		for (int x = 0; x < 10; x++) 
			a[x][y] = i++;
	
	int *p = a[2];

	for (int x = 0; x < 10; x++)
		printf("%d ",p[x]);
	
	return 0;
}
