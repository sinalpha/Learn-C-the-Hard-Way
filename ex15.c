#include <stdio.h>

void print(int *cur_age, char **cur_name, int count){

	int i;

	for (i = 0; i < count ; i++){
		printf("%s had %d years alive.\n", cur_name[i],cur_age[i]);
	}
	
	printf("---------\n");
	
	i = 0;
	while ( i < count){
		printf("%s had %d years alive.\n", cur_name[i],cur_age[i]);		
		i++;
	}

	return;

}


int main(int argc, char *argv[])
{

		//예제에서 사용할 두 개의 배열 생성
		int ages[] = {23,43,12,89,2};
		char *names[] = {
			"Alan","Frank",
			"Mary","John","Lisa"
		};

		//안전하ㅔ ages의 크기를 구함
		int count = sizeof(ages) / sizeof(int);
		int i = 0;

		//첫 번째 방법: 인덱스를 사용
		for ( i = 0; i < count ; i++){
			printf("%s has %d years alive.\n", names[i], ages[i]); 
		}

		printf("---------\n");

		//배열의 시작점으로 포인터를 설정
		int *cur_age = ages;
		char **cur_name = names;

		// 두번쨰 방법 : 포인터를 사용
		for ( i = 0; i < count; i++){
			printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
		
		}
		
		printf("---------\n");

		// 셋 번쨰 방법 : 포인터를 단순 배열처럼 사용
		for ( i = 0; i < count; i++) {
			printf("%s in %d years old again.\n", cur_name[i], cur_age[i]);
		}
		
		printf("---------\n");

		// 네 번째 방법 : 어리석고 복잡한 방법으로 포인터를 사용
		for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++,cur_age++) {
			printf("%s lived %d years so far.\n", *cur_name, *cur_age);
		}

		printf("---------\n");

		for( i = 0; i < count; i++){
			printf("cur_name add : %p cur_ages add : %p\n",&cur_name[i], &cur_age[i]);

		}
		
		printf("---------\n");
		
		print(ages, names, count);

		return 0;

}
