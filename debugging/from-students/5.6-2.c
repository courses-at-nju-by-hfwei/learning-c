#include<stdio.h>
#include<ctype.h>

#define N 30

int main()
{
	char c,last;
	int number;

	while (scanf("%c",&c) != -1) {
		if (!isspace(c)) {
			number++;
			putchar(c);
		}
		else if (isalpha(last)) {
			putchar(' ');
			number++;
		}
		if (number >= N && isspace(last)) {
			putchar('\n');
			number = 0;
		}
		last = c;
	}	
	return 0;
}	
