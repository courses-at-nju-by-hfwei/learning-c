#include<stdio.h>
#include<ctype.h>

#define N 30

int word();

int main()
{
	int number;
	char c;

	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	scanf("%c", &c);
	while (c == ' ' || c == '\n')
		scanf("%c", &c);
	putchar(c);
	number += word();
	while (scanf("%c", &c) != -1) {
		putchar(' ');
		number++;
		while (c == ' ' || c == '\n')
			scanf("%c", &c);
		putchar(c);
		int i = word();
		number += i;
		if (number >= N) {
			printf("\n");	
			number = 0;
		}
	}
	return 0;
}

int word()
{
	char c;
	int num = 1;

	scanf("%c",&c);
	while (!isspace(c)) {
		putchar(c);
		scanf("%c", &c);
		num++;
	}
	return num + 1;
}
