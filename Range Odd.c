#include <stdio.h>

int main() {
	int l,r;
	scanf("%d %d", &l,&r);
	if(l<=r){
	    for(int i=l;i<=r;i++)
	        if((i%2)!=0)
	            printf("%d ", i);
	}
	else
	{
	    for(int i=r;i<=l;i++)
	        if((i%2)!=0)
	            printf("%d ", i);
	}
	return 0;
}

