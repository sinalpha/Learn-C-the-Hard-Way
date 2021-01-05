#include <stdio.h>

int main(int argc, char *argv[])
{

	int a[10][10];
	int i = 0;	
	
	int count = sizeof(a[0]) / sizeof(int);

	for (int y = 0; y < count; y++) 
		for (int x = 0; x < count; x++) 
			a[x][y] = i++;
	
	int *p = a[2];

	for (int x = 0; x < count; x++)
		printf("%d ",p[x]);
	
	return 0;
}
