#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
char arr[5][20] = { "apple","elephant", "monitor","cherry","capybara" };
void random(void) {
	int n = 0, i = 0;
	srand(time(NULL));
	n = rand() % 5;
	i = (int)strlen(arr[n]);
	printf("%s", arr[n]);
	for (int j = 0; j < i; j++) {
		printf("_");
	}
}
int main()
{
	random();
}