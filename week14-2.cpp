//week14-2.cpp
#include <stdio.h>
int main()
{
	int a[100];
	int n,t=1;
	while (scanf("%d",&n) == 1){
		int bad = 0;
		for (int i=0; i<n; i++){//input
			scanf("%d",&a[i]);//input
			//bigger and bigger
			if (i > 0) if (a[i-1] >= a[i]) bad = 1;
		}
		int table[20002] = {};
		for (int i=0; i<n; i++){//for loop
			for (int j=i; j<n; j++){//for loop
				int now = a[i]+a[j];//table[now] to check
				if (table[now] > 0) bad = 1;
				table[now]++;
			}
		}
		if (bad == 0) printf("Case #%d: It is a B2-Sequence.\n\n",t);
		else printf("Case #%d: It is not a B2-Sequence.\n\n",t);
		t++;
	}
}
