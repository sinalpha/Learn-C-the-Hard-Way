#include <stdio.h>
#include <ctype.h>
#include <string.h>
//전방선언
void print_letters(char arg[]);

void print_arguments(int argc,char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++) {
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	
	int strlen1 = strlen(arg);
	int i = 0;

	printf("arg length : %d ", strlen1);

	for (int i = 0; i<=6;i++){
		printf("\narg[%d] : %d = %c",i,arg[i],arg[i]);
	}	

	for( i = 0; i != strlen1 ; i++){
		char ch = arg[i];

		if(isalpha(ch) || isblank(ch)) {
			printf("\n'%c' == %d ",ch,ch);
		}
	}
	
	printf("\n");
}

int main(int argc,char *argv[])
{
	print_arguments(argc,argv);
	return 0;
}
