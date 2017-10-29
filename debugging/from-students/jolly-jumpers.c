#include<stdio.h>
#include<stdlib.h>

#define NUM 3000
int seq[NUM + 10],bool[NUM + 100];

int main() {
	int n,jolly = 1;
	scanf("%d",&n);
	if (n == 1) {
		printf("Jolly");
		return 0;
	}
	scanf("%d",&seq[0]);
	for (int i = 1; i < n; ++i) {
		scanf("%d",&seq[i]);
		int m = abs(seq[i] - seq[i - 1]);
		bool[m] = 1;

	}

	// ++i instead of ++n
	for (int i = 1; i < n; ++n) {
		if (!bool[i]) {
			jolly = 0;
			break;
		}
	}
	if (jolly)
		printf("Jolly");
	else
		printf("Not jolly");

	return 0;
}