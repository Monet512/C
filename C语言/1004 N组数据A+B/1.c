#include <stdio.h>
int main()
{
	int a,b,n,i=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",a + b);
		i+=1;
	}
	return 0;
}
