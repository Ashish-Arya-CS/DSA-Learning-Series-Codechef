#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	if((num%5==0)||(num%6==0))
	    printf("YES");
	else
	    printf("NO");
	return 0;
}

