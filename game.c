#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
char arr[5][20] = { "apple","elephant", "monitor","cherry","capybara" };
int t = 0;
int t_length = 0;
void random(void) {
	int n = 0, i = 0;
	srand(time(NULL));
	n = rand() % 5;
	t = n;
	i = (int)strlen(arr[n]);
	t_length = i;
	for (int j = 0; j < i; j++) {
		printf("_");
	}
	
}

void arr_print(char*arr) {
	for (int i = 0; i < t_length; i++) {
		printf("%c", arr[i]);
	}
	printf("\n");
}

char* answer_arr_init() {
	char * answer_arr = (char*)malloc(sizeof(char) * t_length);
	for (int i = 0; i < t_length; i++) {
		answer_arr[i] = '_';
	}
	return answer_arr;
}

void print(char* answer_arr) {
	char input, ch;
	scanf(" %c", &input);
	for (int i = 0; i < t_length; i++) {
		if (arr[t][i] == input) {
			answer_arr[i] = input;
		}
	}
	arr_print(answer_arr);
}

void judge(char* answer_arr)
{
	int flag = 1;
	for (int i = 0; i < t_length; i++) {
		if (answer_arr[i] == '_') {
			flag = 0;
		}
	}
	if (flag == 1) {
		printf("성공!");
		return;
	}
	
}
int main()
{
	printf("예상하는 글자를 입력해주세요.\n"); 
	random();
	char* answer_arr = answer_arr_init();
	for (; ; ) {
		print(answer_arr);
		judge(answer_arr);
	}

}