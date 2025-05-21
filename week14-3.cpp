//week14-3.cpp
#include <stdio.h>
int main()
{
	int a,ans=0;
	//while (scanf("%d",&a) == 1){
	while (1){ //µL­­°j°é¡ATrue
		scanf("%d",&a);
		if (a == 0) break;
		if (a > 0) ans += a;
	}
	printf("%d",ans);
}
