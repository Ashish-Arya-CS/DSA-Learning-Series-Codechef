#include <stdio.h>

int main() {
	int n,count=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        if((n%i)==0)
        {
            arr[count] = i;
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++)
    {
        printf("%d ",arr[i]);
    }
	return 0;
}

