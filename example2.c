#include <stdio.h>

int main(){
	
	int a = 0x01020304;	
	int *p = &a;
	char *charp = (char *)p;

	printf(" a int : %d\n",a);

	for(int i = 0; i < sizeof(int); i++)
		printf("charp[%d] int : %d\n",i,charp[i]);

}
