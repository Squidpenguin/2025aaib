//week10-3.cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=n,ans = 0;
	while (n>0){
		ans = ans*10 + n%10;
		n /= 10;
	}
	printf("%d+%d=%d\n",a,ans,a+ans);
}
