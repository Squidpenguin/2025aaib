//week14-1.cpp
#include <stdio.h>
int main()
{
	int a[100];
	int n,t=1;
	while (scanf("%d",&n) == 1){
		for (int i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
		printf("Case #%d: It is a B2-Sequence.\n\n",t);
		t++;
	}
}
