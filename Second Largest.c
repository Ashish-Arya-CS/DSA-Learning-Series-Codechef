#include <stdio.h>

int main() {
	int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if((a>b && a<c) || (a>c && a<b))
        printf("%d \n", a);
    else if((b>a && b<c) || (b>c && b<a))     
        printf("%d \n", b);
    else
        printf("%d \n", c);
	return 0;
}