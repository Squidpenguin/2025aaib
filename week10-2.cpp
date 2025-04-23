//week10-2.cpp
#include <stdio.h>
int main()
{
    printf("輸入數字");
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    //printf("個位%d\n",n%10);
    //printf("十位%d\n",n/10%10);
    //printf("百位%d\n",n/10/10%10);
    while (n>0){
        printf("把 %d 剝皮 %d\n",n,n%10);
        n /= 10;
    }
}
