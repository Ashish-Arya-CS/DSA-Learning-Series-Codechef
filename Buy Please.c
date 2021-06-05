#include <stdio.h>

int main() {
	int a,b,c,d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	long sum = (a*c) + (b*d);
	printf("%ld", sum);
	return 0;
}

